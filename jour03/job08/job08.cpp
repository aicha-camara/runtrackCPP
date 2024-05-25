#include <iostream>
using namespace std;

int main() {
    const int MAX_LENGTH = 100;
    char tab[MAX_LENGTH]; 

    cout << "Entrez une chaine de caracteres : ";
    cin.getline(tab, MAX_LENGTH);

    cout << "Le tableau contient : " << tab << endl;

    return 0;
}
