#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Entrez un entier n : ";
    cin >> n;

    cout << "Les multiples de 3 ou de 5 jusqu'à " << n << " sont :" << endl;
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
