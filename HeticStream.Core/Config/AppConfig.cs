/*
 * HETIC: Configuration de l'application
 */

namespace HeticStream.Core.Config
{
    /// <summary>
    /// Configuration de l'application
    /// </summary>
    public static class AppConfig
    {
        /// <summary>
        /// URL de base de l'API
        /// </summary>
        public static string ApiBaseUrl { get; set; } = "http://localhost:8080";

        /// <summary>
        /// Indique si l'API réelle est activée
        /// </summary>
        public static bool ApiEnabled { get; set; } = false;

        /// <summary>
        /// Endpoint pour l'authentification
        /// </summary>
        public static string EndpointLogin { get; set; } = "/api/auth/login";
    }
}