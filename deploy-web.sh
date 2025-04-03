#!/bin/bash

# Script de déploiement web simplifié pour Hetic-Stream
# Ce script compile l'application pour le web et la prépare pour le déploiement

echo "🚀 Déploiement web de Hetic-Stream"
echo "====================================="

# Installer les outils WebAssembly si nécessaire
echo "📦 Installation des outils WebAssembly..."
dotnet workload install wasm-tools

# Compiler l'application en mode Release
echo "🔨 Compilation de l'application pour le web..."
dotnet publish HeticStream.UI -c Release

# Créer un dossier de déploiement simplifié
echo "📂 Préparation du dossier de déploiement..."
mkdir -p web-deploy

# Copier les fichiers compilés dans le dossier de déploiement
echo "📋 Copie des fichiers dans le dossier de déploiement..."
cp -r HeticStream.UI/bin/Release/net8.0/browser-wasm/AppBundle/* web-deploy/

# Créer un fichier server.js pour servir l'application via Node.js
echo "🌐 Création du serveur web simple..."
cat > web-deploy/server.js << 'EOF'
const http = require('http');
const fs = require('fs');
const path = require('path');

const PORT = process.env.PORT || 8080;
const MIME_TYPES = {
  '.html': 'text/html',
  '.js': 'text/javascript',
  '.css': 'text/css',
  '.json': 'application/json',
  '.wasm': 'application/wasm',
  '.png': 'image/png',
  '.jpg': 'image/jpeg',
  '.jpeg': 'image/jpeg',
  '.gif': 'image/gif',
  '.ico': 'image/x-icon',
};

const server = http.createServer((req, res) => {
  console.log(`📡 ${req.method} ${req.url}`);
  
  // Gérer la racine pour servir index.html
  let filePath = '.' + req.url;
  if (filePath === './') {
    filePath = './index.html';
  }

  // Extraire l'extension pour déterminer le type MIME
  const extname = path.extname(filePath).toLowerCase();
  const contentType = MIME_TYPES[extname] || 'application/octet-stream';

  // Lire le fichier demandé
  fs.readFile(filePath, (error, content) => {
    if (error) {
      if(error.code === 'ENOENT') {
        // Si le fichier n'existe pas, servir l'index.html (pour gérer le routage côté client)
        fs.readFile('./index.html', (error, content) => {
          res.writeHead(200, { 'Content-Type': 'text/html' });
          res.end(content, 'utf-8');
        });
      } else {
        // Une autre erreur s'est produite
        res.writeHead(500);
        res.end(`Erreur serveur: ${error.code}`);
      }
    } else {
      // Réponse normale
      res.writeHead(200, { 'Content-Type': contentType });
      res.end(content, 'utf-8');
    }
  });
});

// Démarrer le serveur
server.listen(PORT, () => {
  console.log(`✨ Serveur démarré sur http://localhost:${PORT}`);
  console.log(`🔑 Utilisez les informations suivantes pour vous connecter:`);
  console.log(`   Email: demo@hetic.net`);
  console.log(`   Mot de passe: password123`);
});
EOF

# Créer un fichier package.json minimal
echo "📦 Création du package.json..."
cat > web-deploy/package.json << 'EOF'
{
  "name": "hetic-stream-web",
  "version": "1.0.0",
  "description": "Application de messagerie Hetic-Stream",
  "main": "server.js",
  "scripts": {
    "start": "node server.js"
  },
  "engines": {
    "node": ">=14.0.0"
  }
}
EOF

# Créer une page de redirection pour le nettoyage UX
echo "💅 Amélioration de l'expérience utilisateur..."
cat > web-deploy/loading.html << 'EOF'
<!DOCTYPE html>
<html lang="fr">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>HETIC-STREAM</title>
    <style>
        body, html {
            margin: 0;
            padding: 0;
            height: 100%;
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #36393F;
            color: white;
            display: flex;
            justify-content: center;
            align-items: center;
            overflow: hidden;
        }
        .container {
            text-align: center;
            max-width: 600px;
            padding: 20px;
        }
        h1 {
            color: #7289DA;
            font-size: 36px;
            margin-bottom: 10px;
        }
        p {
            font-size: 18px;
            opacity: 0.8;
            margin-bottom: 25px;
        }
        .loader {
            width: 80px;
            height: 80px;
            border: 5px solid rgba(114, 137, 218, 0.3);
            border-radius: 50%;
            border-top-color: #7289DA;
            margin: 30px auto;
            animation: spin 1s ease-in-out infinite;
        }
        @keyframes spin {
            to {
                transform: rotate(360deg);
            }
        }
        .credits {
            font-size: 14px;
            margin-top: 50px;
            opacity: 0.5;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>HETIC-STREAM</h1>
        <p>Chargement de l'application de messagerie...</p>
        <div class="loader"></div>
        <p>L'application démarre dans quelques instants</p>
        <p class="credentials">
            Données de connexion:<br>
            <strong>Email:</strong> demo@hetic.net<br>
            <strong>Mot de passe:</strong> password123
        </p>
        <div class="credits">© 2025 HETIC-STREAM</div>
    </div>
    <script>
        // Redirection vers l'application principale après un court délai
        setTimeout(() => {
            window.location.href = 'index.html';
        }, 2500);
    </script>
</body>
</html>
EOF

# Modifier l'index.html pour améliorer l'expérience de chargement
cat > web-deploy/index.html << 'EOF'
<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no" />
    <title>HETIC-STREAM</title>
    <base href="/" />
    <link rel="icon" href="favicon.ico" type="image/x-icon" />
    <style>
        html, body {
            margin: 0;
            padding: 0;
            width: 100%;
            height: 100%;
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #36393F;
            color: white;
            overflow: hidden;
        }
        #out {
            width: 100%;
            height: 100%;
        }
        #loading {
            position: fixed;
            top: 0;
            left: 0;
            width: 100%;
            height: 100%;
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;
            background-color: #36393F;
            z-index: 1000;
            transition: opacity 0.5s;
        }
        #loading.fade-out {
            opacity: 0;
        }
        .loader {
            width: 60px;
            height: 60px;
            border: 4px solid rgba(114, 137, 218, 0.3);
            border-radius: 50%;
            border-top-color: #7289DA;
            margin: 20px auto;
            animation: spin 1s ease-in-out infinite;
        }
        @keyframes spin {
            to {
                transform: rotate(360deg);
            }
        }
        h1 {
            color: #7289DA;
            font-size: 28px;
            margin-bottom: 10px;
        }
        p {
            opacity: 0.8;
            margin: 5px 0;
        }
    </style>
</head>
<body>
    <div id="loading">
        <h1>HETIC-STREAM</h1>
        <p>Plateforme de messagerie</p>
        <div class="loader"></div>
        <p>Chargement de l'application...</p>
    </div>
    <div id="out"></div>
    <script type="module" src="./main.js"></script>
    <script>
        // Masquer l'écran de chargement une fois que l'application est prête
        window.addEventListener('load', function() {
            // Donner un peu de temps pour que l'application Avalonia se charge
            setTimeout(() => {
                const loadingElement = document.getElementById('loading');
                loadingElement.classList.add('fade-out');
                setTimeout(() => {
                    loadingElement.style.display = 'none';
                }, 500);
            }, 3000);
        });
    </script>
</body>
</html>
EOF

# Créer un README-DEPLOY.md avec les instructions
echo "📝 Création de la documentation de déploiement..."
cat > web-deploy/README.md << 'EOF'
# Déploiement de Hetic-Stream (Web)

Ce dossier contient une version web de l'application Hetic-Stream, prête à être déployée.

## Déploiement rapide

### Option 1: Déploiement local

1. Si vous avez Node.js installé:
   ```
   node server.js
   ```
   L'application sera disponible sur http://localhost:8080

2. Si vous préférez Python:
   ```
   python -m http.server 8080
   ```
   ou
   ```
   python3 -m http.server 8080
   ```
   L'application sera disponible sur http://localhost:8080

### Option 2: Déploiement sur des services d'hébergement

1. **Netlify**:
   - Déposez simplement ce dossier sur Netlify
   - Si vous utilisez l'interface Netlify, supprimez server.js et package.json avant le téléchargement

2. **Vercel**:
   - Déposez simplement ce dossier sur Vercel
   - Si vous utilisez l'interface Vercel, supprimez server.js et package.json avant le téléchargement

3. **GitHub Pages**:
   - Créez un nouveau dépôt sur GitHub
   - Poussez ce dossier vers le dépôt (supprimez server.js et package.json)
   - Activez GitHub Pages dans les paramètres du dépôt

4. **Azure Static Web Apps**:
   - Déployez directement ce dossier (supprimez server.js et package.json)

5. **Hébergement traditionnel**:
   - Téléchargez simplement tous les fichiers via FTP sur votre serveur

## Connexion à l'application

Utilisez les identifiants suivants pour vous connecter:
- Email: demo@hetic.net
- Mot de passe: password123

## Personnalisation

Pour modifier l'URL de l'API backend, éditer le fichier main.js et rechercher "ApiBaseUrl".
EOF

# Créer un fichier HTML pour documenter davantage l'application
echo "📄 Création d'une page d'accueil..."
cat > web-deploy/about.html << 'EOF'
<!DOCTYPE html>
<html lang="fr">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>À propos de HETIC-STREAM</title>
    <style>
        body, html {
            margin: 0;
            padding: 0;
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #36393F;
            color: white;
            line-height: 1.6;
        }
        .container {
            max-width: 800px;
            margin: 0 auto;
            padding: 40px 20px;
        }
        h1 {
            color: #7289DA;
            font-size: 36px;
            margin-bottom: 20px;
            text-align: center;
        }
        h2 {
            color: #7289DA;
            font-size: 24px;
            margin-top: 30px;
            border-bottom: 1px solid #4E5D94;
            padding-bottom: 10px;
        }
        p {
            margin-bottom: 20px;
        }
        .button {
            display: inline-block;
            background-color: #7289DA;
            color: white;
            padding: 10px 20px;
            text-decoration: none;
            border-radius: 5px;
            margin-top: 20px;
            transition: background-color 0.3s;
        }
        .button:hover {
            background-color: #5B73C7;
        }
        .footer {
            text-align: center;
            margin-top: 50px;
            padding-top: 20px;
            border-top: 1px solid #4E5D94;
            font-size: 14px;
            opacity: 0.7;
        }
        code {
            background-color: #2c2f33;
            padding: 2px 5px;
            border-radius: 3px;
            font-family: 'Courier New', monospace;
        }
        .credentials-box {
            background-color: #2c2f33;
            border-left: 4px solid #7289DA;
            padding: 15px;
            margin: 20px 0;
            border-radius: 0 5px 5px 0;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>HETIC-STREAM</h1>
        
        <p>
            Bienvenue sur l'application de messagerie HETIC-STREAM. Cette application a été développée avec Avalonia UI 
            et C# .NET, et optimisée pour une utilisation web via WebAssembly.
        </p>

        <div class="credentials-box">
            <strong>Informations de connexion :</strong><br>
            Email : <code>demo@hetic.net</code><br>
            Mot de passe : <code>password123</code>
        </div>
        
        <h2>Fonctionnalités actuelles</h2>
        <p>
            La version actuelle de l'application se concentre sur l'écran de connexion avec :
        </p>
        <ul>
            <li>Interface moderne et épurée avec thème sombre</li>
            <li>Validation des champs email et mot de passe</li>
            <li>Notifications visuelles pour les erreurs et succès</li>
            <li>Mode de simulation backend (sans API)</li>
        </ul>
        
        <h2>Architecture technique</h2>
        <p>
            L'application est structurée selon le pattern MVVM (Model-View-ViewModel) avec une séparation claire des responsabilités :
        </p>
        <ul>
            <li><strong>HeticStream.Core</strong> : Contient les modèles de données et les interfaces</li>
            <li><strong>HeticStream.Services</strong> : Implémente les services (API, authentification)</li>
            <li><strong>HeticStream.UI</strong> : Interface utilisateur avec Avalonia UI</li>
        </ul>
        
        <h2>Technologies utilisées</h2>
        <ul>
            <li>Avalonia UI - Framework UI multiplateforme</li>
            <li>C# .NET 8.0 - Langage et framework</li>
            <li>WebAssembly - Compilation pour le web</li>
            <li>CommunityToolkit.MVVM - Bibliothèque MVVM</li>
        </ul>
        
        <a href="loading.html" class="button">Accéder à l'application</a>
        
        <div class="footer">
            © 2025 HETIC-STREAM - Tous droits réservés
        </div>
    </div>
</body>
</html>
EOF

# Créer un script de lancement pour Windows (fichier batch)
echo "🪟 Création d'un script de lancement pour Windows..."
cat > web-deploy/launch-windows.bat << 'EOF'
@echo off
echo Démarrage du serveur Hetic-Stream...
echo.
echo Ce script nécessite Node.js ou Python pour fonctionner.
echo.

REM Vérifier si Node.js est installé
WHERE node >nul 2>nul
IF %ERRORLEVEL% EQU 0 (
    echo Node.js détecté, démarrage du serveur...
    echo.
    echo Application accessible sur http://localhost:8080
    echo.
    echo Email: demo@hetic.net
    echo Mot de passe: password123
    echo.
    start http://localhost:8080/loading.html
    node server.js
    GOTO :EOF
)

REM Vérifier si Python est installé
WHERE python >nul 2>nul
IF %ERRORLEVEL% EQU 0 (
    echo Python détecté, démarrage du serveur...
    echo.
    echo Application accessible sur http://localhost:8000
    echo.
    echo Email: demo@hetic.net
    echo Mot de passe: password123
    echo.
    start http://localhost:8000/loading.html
    python -m http.server 8000
    GOTO :EOF
)

REM Vérifier si Python3 est installé
WHERE python3 >nul 2>nul
IF %ERRORLEVEL% EQU 0 (
    echo Python3 détecté, démarrage du serveur...
    echo.
    echo Application accessible sur http://localhost:8000
    echo.
    echo Email: demo@hetic.net
    echo Mot de passe: password123
    echo.
    start http://localhost:8000/loading.html
    python3 -m http.server 8000
    GOTO :EOF
)

echo Erreur: Ni Node.js ni Python n'est installé sur ce système.
echo Veuillez installer l'un de ces logiciels pour exécuter le serveur.
echo.
echo Vous pouvez télécharger:
echo - Node.js: https://nodejs.org/
echo - Python: https://www.python.org/downloads/
echo.
pause
EOF

# Créer un script de lancement pour Linux/macOS
echo "🐧 Création d'un script de lancement pour Linux/macOS..."
cat > web-deploy/launch-unix.sh << 'EOF'
#!/bin/bash

echo "Démarrage du serveur Hetic-Stream..."
echo ""
echo "Ce script nécessite Node.js ou Python pour fonctionner."
echo ""

# Fonction pour ouvrir un navigateur
open_browser() {
    URL=$1
    # Détecter le système d'exploitation
    if [[ "$OSTYPE" == "darwin"* ]]; then
        # macOS
        open "$URL"
    elif [[ "$OSTYPE" == "linux-gnu"* ]]; then
        # Linux
        if command -v xdg-open &> /dev/null; then
            xdg-open "$URL"
        elif command -v gnome-open &> /dev/null; then
            gnome-open "$URL"
        fi
    fi
}

# Vérifier si Node.js est installé
if command -v node &> /dev/null; then
    echo "Node.js détecté, démarrage du serveur..."
    echo ""
    echo "Application accessible sur http://localhost:8080"
    echo ""
    echo "Email: demo@hetic.net"
    echo "Mot de passe: password123"
    echo ""
    open_browser "http://localhost:8080/loading.html"
    node server.js
    exit 0
fi

# Vérifier si Python est installé
if command -v python3 &> /dev/null; then
    echo "Python3 détecté, démarrage du serveur..."
    echo ""
    echo "Application accessible sur http://localhost:8000"
    echo ""
    echo "Email: demo@hetic.net"
    echo "Mot de passe: password123"
    echo ""
    open_browser "http://localhost:8000/loading.html"
    python3 -m http.server 8000
    exit 0
elif command -v python &> /dev/null; then
    echo "Python détecté, démarrage du serveur..."
    echo ""
    echo "Application accessible sur http://localhost:8000"
    echo ""
    echo "Email: demo@hetic.net"
    echo "Mot de passe: password123"
    echo ""
    open_browser "http://localhost:8000/loading.html"
    python -m http.server 8000
    exit 0
fi

echo "Erreur: Ni Node.js ni Python n'est installé sur ce système."
echo "Veuillez installer l'un de ces logiciels pour exécuter le serveur."
echo ""
echo "Vous pouvez télécharger:"
echo "- Node.js: https://nodejs.org/"
echo "- Python: https://www.python.org/downloads/"
echo ""
EOF

# Rendre les scripts exécutables
chmod +x web-deploy/launch-unix.sh

echo "✅ Déploiement web préparé avec succès!"
echo "📁 Tous les fichiers sont disponibles dans le dossier 'web-deploy'"
echo ""
echo "🚀 Pour lancer l'application sur Windows, exécutez 'launch-windows.bat'"
echo "🚀 Pour lancer l'application sur Linux/macOS, exécutez './launch-unix.sh'"
echo ""
echo "📦 Pour déployer sur un hébergeur web:"
echo "  1. Téléchargez le contenu du dossier 'web-deploy'"
echo "  2. Pour les services statiques (Netlify, Vercel, GitHub Pages):"
echo "     - Supprimez server.js et package.json avant de télécharger"
echo "  3. Pour un serveur Node.js:"
echo "     - Utilisez tous les fichiers tels quels"
echo ""
echo "📝 Informations de connexion:"
echo "  - Email: demo@hetic.net"
echo "  - Mot de passe: password123"