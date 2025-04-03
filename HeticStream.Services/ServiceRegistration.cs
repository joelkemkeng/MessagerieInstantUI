/*
 * HETIC: Enregistrement des services pour l'injection de dépendances
 */

using HeticStream.Core.Interfaces;
using Microsoft.Extensions.DependencyInjection;
using System;

namespace HeticStream.Services
{
    /// <summary>
    /// Configuration pour l'enregistrement des services dans le conteneur d'injection de dépendances
    /// </summary>
    public static class ServiceRegistration
    {
        /// <summary>
        /// Enregistre les services dans le conteneur d'injection de dépendances
        /// </summary>
        /// <param name="services">Collection de services</param>
        /// <returns>Collection de services mise à jour</returns>
        public static IServiceCollection RegisterServices(this IServiceCollection services)
        {
            // Résolution du problème de dépendance circulaire entre AuthService et ApiClient
            // En utilisant Lazy<T> pour différer l'instanciation
            services.AddSingleton<Lazy<IApiClient>>(sp => new Lazy<IApiClient>(() => sp.GetRequiredService<ApiClient>()));
            services.AddSingleton<IAuthService, AuthService>();
            services.AddSingleton<ApiClient>();
            services.AddSingleton<IApiClient>(sp => sp.GetRequiredService<ApiClient>());

            return services;
        }
    }
}