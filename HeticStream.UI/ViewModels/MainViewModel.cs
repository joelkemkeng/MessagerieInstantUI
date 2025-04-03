/*
 * HETIC: ViewModel principal de l'application
 */

using CommunityToolkit.Mvvm.ComponentModel;
using HeticStream.Core.Interfaces;

namespace HeticStream.UI.ViewModels
{
    /// <summary>
    /// ViewModel principal qui contient tous les autres ViewModels
    /// </summary>
    public partial class MainViewModel : ViewModelBase
    {
        /// <summary>
        /// ViewModel pour l'écran de connexion
        /// </summary>
        [ObservableProperty]
        private LoginViewModel _loginViewModel;

        /// <summary>
        /// Indique si l'utilisateur est authentifié
        /// </summary>
        [ObservableProperty]
        private bool _isAuthenticated;

        /// <summary>
        /// Constructeur du ViewModel principal
        /// </summary>
        /// <param name="authService">Service d'authentification</param>
        public MainViewModel(IAuthService authService)
        {
            // Pour la phase 1, nous n'avons que l'écran de connexion
            _loginViewModel = new LoginViewModel(authService);
            
            // Vérifie si l'utilisateur est déjà authentifié
            IsAuthenticated = authService.IsAuthenticated();
        }
    }
}