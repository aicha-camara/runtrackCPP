#include <iostream>
#include <string>
using namespace std;

int main() {
    // Déclaration et initialisation des chaînes de caractères
    string texte1 = "ok";
    string texte2 = "oki";

    // Comparaison des chaînes
    if (texte1 == texte2) {
        cout << "Les chaines sont egales." << endl;
        return 0;
    } else {
        cout << "Les chaines ne sont pas egales." << endl;
        return 1;
    }
}

