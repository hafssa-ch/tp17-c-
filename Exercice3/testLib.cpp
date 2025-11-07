#include "Logger.h"
#include "Config.h"
#include <iostream>
using namespace std;

int main() {
    Logger::getInstance().log("Démarrage de l'application");

    Config cfg;
    cout << "Utilisateur: " << cfg.get("user") << endl;
    cout << "Mot de passe: " << cfg.get("password") << endl;

    return 0;
}

