# Guide Rapide d'Exécution Web sous Windows

Ce guide simplifié vous explique comment visualiser l'application Hetic-Stream dans votre navigateur web.

## Pourquoi c'est compliqué?

Avalonia UI est principalement conçu pour les applications de bureau natives, mais offre un support expérimental pour WebAssembly (WASM). Contrairement à un site web ordinaire, une application Avalonia doit être spécifiquement compilée pour le web, ce qui nécessite des étapes supplémentaires.

## Guide en 3 étapes simples

### Étape 1: Installer les outils WebAssembly

Ouvrez une invite de commande en tant qu'administrateur et exécutez:

```
dotnet workload install wasm-tools-net8
dotnet workload restore
```

Cette commande ajoute à .NET 8 la capacité de compiler vers WebAssembly.

### Étape 2: Compiler pour le web

Dans le dossier du projet, exécutez:

```
dotnet publish HeticStream.UI.Browser -c Release
```

Cette commande génère la version web de l'application dans le dossier `web-deploy`.

### Étape 3: Lancer l'application

Double-cliquez simplement sur le fichier:
```
web-deploy/launch-windows.bat
```

Votre navigateur s'ouvrira automatiquement avec l'application.

## Identifiants de connexion
- Email: demo@hetic.net
- Mot de passe: password123

## Résolution de problèmes

**Erreur "port already in use":** 
Le script utilise maintenant le port 8090. Si vous avez toujours un conflit, fermez les applications qui pourraient utiliser ce port ou modifiez le fichier `launch-windows.bat` pour utiliser un autre port.