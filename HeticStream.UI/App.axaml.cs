/*
 * HETIC: Point d'entrée de l'application
 */

using Avalonia;
using Avalonia.Controls.ApplicationLifetimes;
using Avalonia.Data.Core;
using Avalonia.Data.Core.Plugins;
using Avalonia.Markup.Xaml;
using HeticStream.Core.Config;
using HeticStream.Core.Interfaces;
using HeticStream.Services;
using HeticStream.UI.ViewModels;
using HeticStream.UI.Views;
using Microsoft.Extensions.DependencyInjection;
using System;
using System.Linq;

namespace HeticStream.UI
{
    /// <summary>
    /// Classe principale de l'application
    /// </summary>
    public partial class App : Application
    {
        /// <summary>
        /// Conteneur d'injection de dépendances
        /// </summary>
        private readonly ServiceProvider _serviceProvider;

        /// <summary>
        /// Constructeur
        /// </summary>
        public App()
        {
            // Configuration des services
            var services = new ServiceCollection();
            ConfigureServices(services);
            _serviceProvider = services.BuildServiceProvider();
            
            // Initialisation de la configuration
            InitializeConfig();
        }

        /// <summary>
        /// Initialise la configuration de l'application
        /// </summary>
        private void InitializeConfig()
        {
            // Chargement des variables d'environnement ou configuration par défaut
            AppConfig.ApiBaseUrl = Environment.GetEnvironmentVariable("API_BASE_URL") ?? "http://localhost:8080";
            AppConfig.ApiEnabled = bool.TryParse(Environment.GetEnvironmentVariable("API_ENABLED"), out bool enabled) && enabled;
            AppConfig.EndpointLogin = Environment.GetEnvironmentVariable("ENDPOINT_LOGIN") ?? "/api/auth/login";
        }

        /// <summary>
        /// Configure les services pour l'injection de dépendances
        /// </summary>
        private void ConfigureServices(ServiceCollection services)
        {
            // Enregistrement des services
            services.RegisterServices();
            
            // Enregistrement des ViewModels
            services.AddSingleton<MainViewModel>();
        }

        /// <summary>
        /// Initialise l'application
        /// </summary>
        public override void Initialize()
        {
            AvaloniaXamlLoader.Load(this);
        }

        /// <summary>
        /// Appelé lorsque l'initialisation du framework est terminée
        /// </summary>
        public override void OnFrameworkInitializationCompleted()
        {
            if (ApplicationLifetime is IClassicDesktopStyleApplicationLifetime desktop)
            {
                // Désactivation de la validation des annotations de données d'Avalonia
                DisableAvaloniaDataAnnotationValidation();
                
                // Création de la fenêtre principale avec le ViewModel principal
                desktop.MainWindow = new MainWindow
                {
                    DataContext = _serviceProvider.GetService<MainViewModel>(),
                };
            }

            base.OnFrameworkInitializationCompleted();
        }

        /// <summary>
        /// Désactive la validation des annotations de données d'Avalonia
        /// </summary>
        private void DisableAvaloniaDataAnnotationValidation()
        {
            // Récupération des plugins à supprimer
            var dataValidationPluginsToRemove =
                BindingPlugins.DataValidators.OfType<DataAnnotationsValidationPlugin>().ToArray();

            // Suppression de chaque entrée trouvée
            foreach (var plugin in dataValidationPluginsToRemove)
            {
                BindingPlugins.DataValidators.Remove(plugin);
            }
        }
    }
}