#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Entrez le nombre minimal : ";
    cin >> a;
    cout << "Entrez le nombre maximal : ";
    cin >> b;

    cout << "Les entiers de " << a << " à " << b << " sont : ";
    int i = a;
    while (i <= b) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    return 0;
}
