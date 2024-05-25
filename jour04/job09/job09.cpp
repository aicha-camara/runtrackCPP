#include <iostream>
using namespace std;

int main() {
    int taille;

    cout << "Entrez la taille du tableau : ";
    cin >> taille;

    int *tableau = new int[taille];

    cout << "Entrez " << taille << " entiers pour remplir le tableau :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }

    cout << "Contenu du tableau :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    delete[] tableau;

    return 0;
}
