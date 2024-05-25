#include <iostream>
#include <string>

using namespace std;

bool estPalindrome(const string &mot) {
    int debut = 0;
    int fin = mot.length() - 1;

    while (debut < fin) {
        if (mot[debut] != mot[fin]) {
            return false;
        }
        debut++;
        fin--;
    }

    return true;
}

int main() {
    string tab[] = {"radar", "hello", "lvel", "stats", "world"};
    cout << "Palindromes trouver dans le tableau : " << endl;
    for (const string &mot : tab) {
        if (estPalindrome(mot)) {
            cout << mot << endl;
        }
    }
    return 0;
}
