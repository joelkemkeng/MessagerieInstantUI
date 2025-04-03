/*
 * HETIC: Fichier de modèles pour l'authentification
 */

namespace HeticStream.Core.Models
{
    /// <summary>
    /// Modèle de requête pour l'authentification
    /// </summary>
    public class LoginRequest
    {
        public string Email { get; set; } = string.Empty;
        public string Password { get; set; } = string.Empty;
    }

    /// <summary>
    /// Modèle de réponse pour l'authentification
    /// </summary>
    public class LoginResponse
    {
        public bool Success { get; set; }
        public string Token { get; set; } = string.Empty;
        public string UserId { get; set; } = string.Empty;
        public string Message { get; set; } = string.Empty;
    }

    /// <summary>
    /// Modèle pour les informations de l'utilisateur connecté
    /// </summary>
    public class UserSession
    {
        public string UserId { get; set; } = string.Empty;
        public string Token { get; set; } = string.Empty;
        public bool IsAuthenticated { get; set; }
    }
}