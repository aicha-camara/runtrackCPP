#include <iostream>
using namespace std;

int main() {
    int note;
    cout << "Saisir une note : ";
    cin >> note;
    if (note >= 0 && note <= 20) {
        if (note > 10) {
            cout << "Valide" << endl;
        } else {
            cout << "Non valide" << endl;
        }
    } else {
        cout << "Saisie invalide" << endl;
        return 1;
    }
    return 0;
}

