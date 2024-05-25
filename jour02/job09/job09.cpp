#include <iostream>
using namespace std;

int main() {
    int a, b, entier;
    cout << "Entrez le nombre minimal : ";
    cin >> a;
    cout << "Entrez le nombre maximal : ";
    cin >> b;
    cout << "Entrez un entier : ";
    cin >> entier;

    if (entier >= a && entier <= b) {
        cout << "GAGNE" << endl;
    } else {
        cout << "PERDU" << endl;
    }

    return 0;
}
