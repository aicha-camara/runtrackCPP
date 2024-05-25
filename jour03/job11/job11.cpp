#include <iostream>

using namespace std;

int main() {
    const int taille = 5;
    int tableau[taille];
    int sommePairs = 0;

    cout << "Entrez " << taille << " entiers dans le tableau :\n";
    for (int i = 0; i < taille; ++i) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
        if (tableau[i] % 2 == 0) { // Vérifie si l'élément est pair
            sommePairs += tableau[i]; // Ajoute l'élément pair à la somme
        }
    }

    cout << "La somme des elements pairs du tableau est : " << sommePairs << endl;

    return 0;
}

