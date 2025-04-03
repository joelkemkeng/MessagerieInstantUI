/*
 * HETIC: Interface du client API
 */

using System.Threading.Tasks;

namespace HeticStream.Core.Interfaces
{
    /// <summary>
    /// Interface définissant le client API
    /// </summary>
    public interface IApiClient
    {
        /// <summary>
        /// Effectue une requête POST vers l'API
        /// </summary>
        /// <typeparam name="TRequest">Type de la requête</typeparam>
        /// <typeparam name="TResponse">Type de la réponse</typeparam>
        /// <param name="endpoint">Endpoint de l'API</param>
        /// <param name="request">Données de la requête</param>
        /// <param name="authenticated">Indique si la requête nécessite une authentification</param>
        /// <returns>Réponse de l'API</returns>
        Task<TResponse> PostAsync<TRequest, TResponse>(string endpoint, TRequest request, bool authenticated = false);
    }
}