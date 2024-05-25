#include <iostream>
using namespace std;

int main() {
    int tableau[] = {10, 20, 30, 40, 50};

    int taille = sizeof(tableau) / sizeof(tableau[0]);

    for (int i = 0; i < taille; ++i) {
        cout << "Adresse de l'element " << i << " : " << &tableau[i] << ", valeur : " << tableau[i] << endl;
    }

    return 0;
}
