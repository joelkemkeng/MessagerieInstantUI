/*
 * HETIC: Client API pour les communications avec le backend
 */

using HeticStream.Core.Config;
using HeticStream.Core.Interfaces;
using HeticStream.Core.Models;
using System;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;

namespace HeticStream.Services
{
    /// <summary>
    /// Client API pour les communications avec le backend
    /// </summary>
    public class ApiClient : IApiClient
    {
        private readonly HttpClient _httpClient;
        private readonly Lazy<IAuthService> _authService;

        /// <summary>
        /// Constructeur du client API
        /// </summary>
        public ApiClient(Lazy<IAuthService> authService)
        {
            _httpClient = new HttpClient { BaseAddress = new Uri(AppConfig.ApiBaseUrl) };
            _authService = authService;
        }

        /// <inheritdoc/>
        public async Task<TResponse> PostAsync<TRequest, TResponse>(string endpoint, TRequest request, bool authenticated = false)
        {
            // Mode de simulation (pas d'appel API réel)
            if (!AppConfig.ApiEnabled)
            {
                // Traiter uniquement la connexion en mode simulation
                if (typeof(TRequest) == typeof(LoginRequest) && typeof(TResponse) == typeof(LoginResponse) && endpoint == AppConfig.EndpointLogin)
                {
                    var loginReq = request as LoginRequest;
                    var loginResponse = new LoginResponse
                    {
                        Success = loginReq?.Email == "demo@hetic.net" && loginReq?.Password == "password123",
                        UserId = "12345",
                        Token = "sim_token_123456789",
                        Message = "Connexion simulée"
                    };

                    return (TResponse)(object)loginResponse;
                }

                throw new InvalidOperationException("API simulée uniquement disponible pour la connexion");
            }

            // Config auth
            if (authenticated && _authService.Value.IsAuthenticated())
            {
                var session = _authService.Value.GetCurrentSession();
                _httpClient.DefaultRequestHeaders.Authorization = 
                    new AuthenticationHeaderValue("Bearer", session.Token);
            }

            // Contenu JSON
            var content = new StringContent(
                JsonSerializer.Serialize(request),
                Encoding.UTF8,
                "application/json");

            // Requête
            var response = await _httpClient.PostAsync(endpoint, content);
            response.EnsureSuccessStatusCode();

            // Réponse
            var jsonResponse = await response.Content.ReadAsStringAsync();
            return JsonSerializer.Deserialize<TResponse>(jsonResponse) ?? 
                throw new InvalidOperationException("La réponse ne peut pas être désérialisée");
        }
    }
}