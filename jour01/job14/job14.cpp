#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int nombre;

    // Demander à l'utilisateur d'entrer un nombre
    cout << "Entrez un nombre : ";
    cin >> nombre;

    // Convertir le nombre en une chaîne de caractères
    string nombreString = to_string(nombre);

    // Inverser la chaîne de caractères
    reverse(nombreString.begin(), nombreString.end());

    // Convertir la chaîne inversée en un nombre entier
    int nombreInverse = stoi(nombreString);

    // Afficher le nombre inversé
    cout << "Le nombre inverse est : " << nombreInverse << endl;

    return 0;
}
