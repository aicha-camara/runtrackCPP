#include <iostream>
using namespace std;

int main() {
    int entier;
    int resultat;

    cout << "Saisissez un nombre à mettre au carré : ";
    cin >> entier;

    while (true) {
        if (entier < 0) {
            cout << "Le nombre doit être positif" << endl;
        } else if (entier == 0) {
            cout << "Fermeture du programme" << endl;
            break;
        } else {
            resultat = entier * entier;
            cout << "Le carré de " << entier << " est : " << resultat << endl;
        }
        cout << "Saisissez de nouveau un nombre à mettre au carré : ";
        cin >> entier;
    }

    return 0;
}
