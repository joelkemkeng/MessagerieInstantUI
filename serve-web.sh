#!/bin/bash

# Compile l'application pour le web
dotnet publish HeticStream.UI -c Release

# Démarre un serveur HTTP simple pour servir l'application
cd HeticStream.UI/bin/Release/net8.0/browser-wasm/AppBundle
echo "Application web disponible sur http://localhost:8000"
python3 -m http.server 8000