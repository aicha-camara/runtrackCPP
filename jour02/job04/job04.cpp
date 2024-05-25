#include <iostream>
using namespace std;

int main() {
    int num1, num2, operateur, resultat = 0;
    cout << "Saisir le premier nombre : ";
    cin >> num1;
    cout << "Saisir le deuxième nombre : ";
    cin >> num2;

    cout << "Quelle opération voulez-vous faire :\n"
            "1 - Addition\n"
            "2 - Multiplication\n"
            "3 - Division\n"
            "4 - Soustraction\n";

    cin >> operateur;

    if (operateur == 1) {
        resultat = num1 + num2;
    } else if (operateur == 2) {
        resultat = num1 * num2;
    } else if (operateur == 3) {
        resultat = num1 / num2;
    } else if (operateur == 4) {
        resultat = num1 - num2;
    } else {
        cout << "Choix impossible" << endl;
        return 1;
    }

    cout << "Le resultat est "<< resultat << endl;
    return 0;
}
