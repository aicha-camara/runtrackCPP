#include <iostream>
#include <string>
using namespace std;

int main() {
    string tableau[] = { "2019", "La Plateforme", "3.14", "Étudiants" };

    int taille = sizeof(tableau) / sizeof(tableau[0]);

    for (int i = 0; i < taille; ++i) {
        cout << "Adresse de l'element " << i << " : " << &tableau[i] << ", valeur : " << tableau[i] << endl;
    }

    return 0;
}
