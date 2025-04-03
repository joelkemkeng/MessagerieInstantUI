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
