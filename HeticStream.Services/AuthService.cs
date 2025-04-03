/*
 * HETIC: Service d'authentification
 */

using HeticStream.Core.Config;
using HeticStream.Core.Interfaces;
using HeticStream.Core.Models;
using System;
using System.Threading.Tasks;

namespace HeticStream.Services
{
    /// <summary>
    /// Service de gestion de l'authentification
    /// </summary>
    public class AuthService : IAuthService
    {
        private readonly Lazy<IApiClient> _apiClient;
        private UserSession _currentSession;

        /// <summary>
        /// Constructeur du service d'authentification
        /// </summary>
        /// <param name="apiClient">Client API (lazy pour éviter la dépendance circulaire)</param>
        public AuthService(Lazy<IApiClient> apiClient)
        {
            _apiClient = apiClient;
            _currentSession = new UserSession { IsAuthenticated = false };
        }

        /// <inheritdoc/>
        public async Task<LoginResponse> LoginAsync(string email, string password)
        {
            var request = new LoginRequest
            {
                Email = email,
                Password = password
            };

            var response = await _apiClient.Value.PostAsync<LoginRequest, LoginResponse>(
                AppConfig.EndpointLogin, request);

            if (response.Success)
            {
                _currentSession = new UserSession
                {
                    UserId = response.UserId,
                    Token = response.Token,
                    IsAuthenticated = true
                };
            }

            return response;
        }

        /// <inheritdoc/>
        public bool IsAuthenticated() => _currentSession.IsAuthenticated;

        /// <inheritdoc/>
        public UserSession GetCurrentSession() => _currentSession;

        /// <inheritdoc/>
        public void Logout()
        {
            _currentSession = new UserSession { IsAuthenticated = false };
        }
    }
}