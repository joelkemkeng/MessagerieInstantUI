/*
 * HETIC: ViewModel pour l'écran de connexion
 */

using CommunityToolkit.Mvvm.ComponentModel;
using CommunityToolkit.Mvvm.Input;
using HeticStream.Core.Interfaces;
using System;
using System.Threading.Tasks;

namespace HeticStream.UI.ViewModels
{
    /// <summary>
    /// ViewModel pour l'écran de connexion
    /// </summary>
    public partial class LoginViewModel : ViewModelBase
    {
        private readonly IAuthService _authService;

        /// <summary>
        /// Email de l'utilisateur
        /// </summary>
        [ObservableProperty]
        private string _email = string.Empty;

        /// <summary>
        /// Mot de passe de l'utilisateur
        /// </summary>
        [ObservableProperty]
        private string _password = string.Empty;

        /// <summary>
        /// Message d'erreur
        /// </summary>
        [ObservableProperty]
        private string _errorMessage = string.Empty;

        /// <summary>
        /// Indique si une opération est en cours
        /// </summary>
        [ObservableProperty]
        private bool _isLoading;

        /// <summary>
        /// Indique si le modal de notification est visible
        /// </summary>
        [ObservableProperty]
        private bool _isNotificationVisible;

        /// <summary>
        /// Titre de la notification
        /// </summary>
        [ObservableProperty]
        private string _notificationTitle = string.Empty;

        /// <summary>
        /// Message de la notification
        /// </summary>
        [ObservableProperty]
        private string _notificationMessage = string.Empty;

        /// <summary>
        /// Indique si la notification est une erreur
        /// </summary>
        [ObservableProperty]
        private bool _isError;

        /// <summary>
        /// Constructeur du ViewModel de connexion
        /// </summary>
        /// <param name="authService">Service d'authentification</param>
        public LoginViewModel(IAuthService authService)
        {
            _authService = authService;
        }

        /// <summary>
        /// Commande de connexion
        /// </summary>
        [RelayCommand]
        private async Task LoginAsync()
        {
            try
            {
                // Validation des champs
                if (string.IsNullOrWhiteSpace(Email))
                {
                    ShowNotification("Erreur", "Veuillez saisir votre email", true);
                    return;
                }

                if (!IsValidEmail(Email))
                {
                    ShowNotification("Erreur", "Veuillez saisir un email valide", true);
                    return;
                }

                if (string.IsNullOrWhiteSpace(Password))
                {
                    ShowNotification("Erreur", "Veuillez saisir votre mot de passe", true);
                    return;
                }

                // Connexion
                IsLoading = true;
                var response = await _authService.LoginAsync(Email, Password);
                IsLoading = false;

                if (response.Success)
                {
                    ShowNotification("Succès", "Connexion réussie", false);
                    // TODO: Navigation vers l'écran principal dans les phases futures
                }
                else
                {
                    ShowNotification("Erreur", response.Message, true);
                }
            }
            catch (Exception ex)
            {
                IsLoading = false;
                ShowNotification("Erreur", $"Une erreur est survenue: {ex.Message}", true);
            }
        }

        /// <summary>
        /// Valide le format de l'email
        /// </summary>
        private bool IsValidEmail(string email)
        {
            try
            {
                var addr = new System.Net.Mail.MailAddress(email);
                return addr.Address == email;
            }
            catch
            {
                return false;
            }
        }

        /// <summary>
        /// Affiche une notification
        /// </summary>
        private void ShowNotification(string title, string message, bool isError)
        {
            NotificationTitle = title;
            NotificationMessage = message;
            IsError = isError;
            IsNotificationVisible = true;
        }

        /// <summary>
        /// Ferme la notification
        /// </summary>
        [RelayCommand]
        private void CloseNotification()
        {
            IsNotificationVisible = false;
        }
    }
}