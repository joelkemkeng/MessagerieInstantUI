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
    echo Application accessible sur http://localhost:8090
    echo.
    echo Email: demo@hetic.net
    echo Mot de passe: password123
    echo.
    start http://localhost:8090/loading.html
    node server.js --port=8090
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
