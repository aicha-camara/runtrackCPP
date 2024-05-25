#include <iostream>
using namespace std;

int main() {
    int N;
    long long somme = 0; // Utilisation de long long pour éviter un dépassement de capacité

    // Demander à l'utilisateur de saisir un entier N
    cout << "Entrez un entier N : ";
    cin >> N;

    // Calculer la somme des cubes de 5^3 à N^3
    for (int i = 5; i <= N; i++) {
        long long cube = i * i * i; // Calculer le cube de i
        somme += cube; // Ajouter le cube à la somme
    }

    // Afficher la somme des cubes
    cout << "La somme des cubes de 5^3 a N^3 est : " << somme << endl;

    return 0;
}
