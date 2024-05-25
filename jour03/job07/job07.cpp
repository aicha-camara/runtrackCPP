#include <iostream>
using namespace std;

int main () {
    int T[10];

    cout << "Saisissez 10 entiers : " << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> T[i];
    }

    int max = T[0];
    for (int i = 1; i < 10; ++i) {
        if (T[i] > max) {
            max = T[i];
        }
    }

    cout << "L'entier le plus grand est : " << max << endl;

    return 0;
}
