#include <iostream>
#include <string>
using namespace std;

int main() {
    string mot = "";
    string *pmot = &mot;

    cout << "Entrez une chaine de caracteres : ";
    cin >> mot;

    int n = mot.length();
    for (int i = 0; i < n / 2; ++i) {
        swap((*pmot)[i], (*pmot)[n - i - 1]);
    }

    cout << "Le mot inverse : " << *pmot << endl;
    return 0;
}
