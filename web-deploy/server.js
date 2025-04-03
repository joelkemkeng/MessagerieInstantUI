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
