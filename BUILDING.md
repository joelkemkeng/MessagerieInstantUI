# Guide de compilation et d'exécution

Ce document détaille les étapes nécessaires pour compiler et exécuter l'application Hetic-Stream.

## Prérequis

- .NET SDK 8.0 ou supérieur
- Un environnement de développement compatible (Visual Studio, Visual Studio Code, JetBrains Rider, etc.)

## Installation des outils

### Windows

1. Téléchargez et installez le SDK .NET depuis [le site officiel de Microsoft](https://dotnet.microsoft.com/download)
2. Installez un environnement de développement si nécessaire
3. Redémarrez votre ordinateur après l'installation

### macOS

1. Téléchargez et installez le SDK .NET depuis [le site officiel de Microsoft](https://dotnet.microsoft.com/download)
2. Installez un environnement de développement si nécessaire
3. Ouvrez Terminal et vérifiez l'installation avec la commande `dotnet --version`

### Linux

1. Suivez les instructions d'installation spécifiques à votre distribution sur [le site officiel de Microsoft](https://dotnet.microsoft.com/download)
2. Vérifiez l'installation avec la commande `dotnet --version`

## Configuration de l'environnement

L'application utilise les variables d'environnement suivantes :

- `API_BASE_URL` : URL de base de l'API (par défaut: http://localhost:8080)
- `API_ENABLED` : Activation/désactivation de l'API réelle (par défaut: false)
- `ENDPOINT_LOGIN` : Chemin de l'endpoint de connexion (par défaut: /api/auth/login)

Vous pouvez définir ces variables selon votre environnement.

## Compilation du projet

1. Clonez ou téléchargez le code source du projet
2. Ouvrez un terminal et accédez au répertoire racine du projet
3. Exécutez la commande suivante pour compiler le projet :
   ```
   dotnet build
   ```

## Exécution de l'application

Depuis le répertoire racine du projet, exécutez la commande suivante :
```
dotnet run --project HeticStream.UI
```

Pour exécuter en mode release (version optimisée) :
```
dotnet run --project HeticStream.UI --configuration Release
```

## Exécution de l'application avec des variables d'environnement spécifiques

### Windows (PowerShell)
```powershell
$env:API_ENABLED="true"
$env:API_BASE_URL="http://votre-api.com"
dotnet run --project HeticStream.UI
```

### Linux/macOS
```bash
API_ENABLED=true API_BASE_URL="http://votre-api.com" dotnet run --project HeticStream.UI
```

## Mode simulation

En mode simulation (API_ENABLED=false), vous pouvez vous connecter avec les identifiants suivants :
- Email : demo@hetic.net
- Mot de passe : password123

## Création d'un exécutable autonome

Pour créer un exécutable autonome, exécutez la commande suivante :

### Windows
```
dotnet publish -c Release -r win-x64 --self-contained true -p:PublishSingleFile=true HeticStream.UI
```

### macOS
```
dotnet publish -c Release -r osx-x64 --self-contained true -p:PublishSingleFile=true HeticStream.UI
```

### Linux
```
dotnet publish -c Release -r linux-x64 --self-contained true -p:PublishSingleFile=true HeticStream.UI
```

L'exécutable sera disponible dans le répertoire `HeticStream.UI/bin/Release/net8.0/{runtime}/publish/`