#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    string heure;
    regex format("^[0-9]{2}h[0-9]{2}$"); // Expression régulière pour le format xxhxx

    cout << "Saisir une heure (format xxhxx) : ";
    getline(cin, heure);

    if (regex_match(heure, format)) {
        cout << "Format d'heure valide "<< endl;
    } else {
        cout << "Format d'heure invalide." << endl;
    }

    return 0;
}
