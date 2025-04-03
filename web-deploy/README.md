# Déploiement de Hetic-Stream (Web)

Ce dossier contient une version web de l'application Hetic-Stream, prête à être déployée.

## Déploiement rapide

### Option 1: Déploiement local sous Windows

1. Exécuter simplement le fichier `launch-windows.bat`

L'application sera automatiquement lancée dans votre navigateur :
- Avec Node.js : http://localhost:8090
- Avec Python : http://localhost:8000

### Option 2: Déploiement local manuel

1. Si vous avez Node.js installé:
   ```
   node server.js --port=8090
   ```
   L'application sera disponible sur http://localhost:8090

2. Si vous préférez Python:
   ```
   python -m http.server 8000
   ```
   ou
   ```
   python3 -m http.server 8000
   ```
   L'application sera disponible sur http://localhost:8000

### Option 3: Déploiement sur des services d'hébergement

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
