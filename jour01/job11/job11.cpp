#include <iostream>
using namespace std;

int main() {
    int n, m;

    // Demander à l'utilisateur de saisir les deux entiers
    cout << "Entrez deux entiers n et m : ";
    cin >> n >> m;

    // Afficher les entiers avant l'échange
    cout << "Avant l'echange : n = " << n << ", m = " << m << endl;

    // Échanger les valeurs des entiers
    swap(n, m);

    // Afficher les entiers après l'échange
    cout << "Apres l'echange : n = " << n << ", m = " << m << endl;

    return 0;
}
