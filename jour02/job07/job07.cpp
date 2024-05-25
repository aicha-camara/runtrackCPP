#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Entrez un nombre minimal : ";
    cin >> a;
    cout << "Entrez un nombre maximal : ";
    cin >> b;

    cout << "Les entiers de " << a << " à " << b << " sont : ";
    for (int i = a; i <= b; ++i) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

