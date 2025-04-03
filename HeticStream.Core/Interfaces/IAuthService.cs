/*
 * HETIC: Interface du service d'authentification
 */

using HeticStream.Core.Models;
using System.Threading.Tasks;

namespace HeticStream.Core.Interfaces
{
    /// <summary>
    /// Interface définissant le service d'authentification
    /// </summary>
    public interface IAuthService
    {
        /// <summary>
        /// Authentifie un utilisateur avec ses identifiants
        /// </summary>
        /// <param name="email">Email de l'utilisateur</param>
        /// <param name="password">Mot de passe de l'utilisateur</param>
        /// <returns>Réponse d'authentification</returns>
        Task<LoginResponse> LoginAsync(string email, string password);

        /// <summary>
        /// Vérifie si l'utilisateur est actuellement authentifié
        /// </summary>
        /// <returns>True si l'utilisateur est authentifié</returns>
        bool IsAuthenticated();

        /// <summary>
        /// Récupère la session utilisateur courante
        /// </summary>
        /// <returns>Données de session de l'utilisateur</returns>
        UserSession GetCurrentSession();

        /// <summary>
        /// Déconnecte l'utilisateur courant
        /// </summary>
        void Logout();
    }
}