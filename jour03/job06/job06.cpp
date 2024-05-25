#include <iostream>
using namespace std;

int main() {
    int T[10];
    int resultat = 0;

    cout << "Saisissez 10 entiers :\n";
    for (int i = 0; i < 10; ++i) {
        cin >> T[i];
        if (T[i] >= 5) {
            resultat++;
        }
    }

    cout << "Le nombres d'entiers superieurs ou egaux a 5 est : "<< resultat << endl;

    return 0;
}
