# HETIC-STREAM

Application de messagerie moderne développée avec Avalonia UI et C# .NET.

## Description du projet

HETIC-STREAM est une application de messagerie inspirée de Discord, offrant une interface moderne et intuitive. Le développement suit une approche progressive, en commençant par l'écran de connexion.

## Architecture technique

L'application est structurée selon le pattern MVVM (Model-View-ViewModel) avec une séparation claire des responsabilités :

- **HeticStream.Core** : Contient les modèles de données et les interfaces
- **HeticStream.Services** : Implémente les services (API, authentification)
- **HeticStream.UI** : Interface utilisateur avec Avalonia UI

## Fonctionnalités

### Phase 1 (version actuelle)
- Interface de connexion moderne et épurée
- Validation des champs email et mot de passe
- Modal de notification pour les erreurs/succès
- Mode double backend (simulation/API réelle)

### Phases futures
1. Écran d'inscription
2. Interface principale style Discord
3. Fonctionnalités de messagerie
4. Optimisations et raffinements

## Contrat API

### Authentification

**Endpoint** : POST `/api/auth/login`

**Corps de la requête** :
```json
{
  "email": "utilisateur@exemple.com",
  "password": "motDePasse123"
}
```

**Réponse attendue** :
```json
{
  "success": true,
  "token": "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9...",
  "userId": "12345",
  "message": "Connexion réussie"
}
```

## Configuration

L'application utilise des variables d'environnement pour sa configuration :

- `API_BASE_URL` : URL de base de l'API (par défaut: http://localhost:8080)
- `API_ENABLED` : Activation/désactivation de l'API réelle (par défaut: false)
- `ENDPOINT_LOGIN` : Chemin de l'endpoint de connexion (par défaut: /api/auth/login)

## Mode simulation

En mode simulation (API_ENABLED=false), vous pouvez vous connecter avec les identifiants suivants :
- Email : demo@hetic.net
- Mot de passe : password123

## Compilation et exécution

### Prérequis
- .NET SDK 8.0 ou supérieur
- IDE recommandé : Visual Studio, Visual Studio Code ou Rider

### Exécution sous Windows (application native)
1. Cloner le dépôt :
```
git clone [url-du-depot]
cd HeticStream
```

2. Compiler la solution :
```
dotnet build
```

3. Exécuter l'application :
```
dotnet run --project HeticStream.UI
```

### Exécution en mode Web
1. S'assurer que le SDK .NET 8.0 est installé avec le support WebAssembly :
```
dotnet workload install wasm-tools-net8
dotnet workload restore
```

2. Compiler la version web :
```
dotnet publish HeticStream.UI.Browser -c Release
```

3. Lancer l'application web :
   - **Windows** : Exécuter le fichier `web-deploy/launch-windows.bat`
   - **Linux/Mac** : Exécuter le script `./deploy-web.sh`

L'application sera accessible :
- Avec Node.js : http://localhost:8090
- Avec Python : http://localhost:8000

Identifiants de connexion :
- Email : demo@hetic.net
- Mot de passe : password123

## Développement

Pour contribuer au projet, veuillez suivre les conventions de code établies et vous assurer que votre code respecte l'architecture MVVM.

Chaque fichier doit contenir un en-tête avec le préfixe "HETIC" dans son commentaire principal.

## Licence

Ce projet est développé dans le cadre pédagogique de HETIC.