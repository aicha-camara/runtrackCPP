#include <iostream>
using namespace std;

int main() {
    double prixHTKiloCarottes, nombreKilos, tauxTVA;

    // Demander à l'utilisateur de saisir le prix HT d'un kilo de carottes
    cout << "Entrez le prix HT d'un kilo de carottes : ";
    cin >> prixHTKiloCarottes;

    // Demander à l'utilisateur de saisir le nombre de kilos de carottes
    cout << "Entrez le nombre de kilos de carottes : ";
    cin >> nombreKilos;

    // Demander à l'utilisateur de saisir le taux de TVA en pourcentage
    cout << "Entrez le taux de TVA en pourcentage (ex : 15 pour 15%) : ";
    cin >> tauxTVA;

    // Calculer le prix TTC des carottes
    double prixTTC = prixHTKiloCarottes * nombreKilos * (1 + tauxTVA / 100);

    // Afficher le prix TTC des carottes
    cout << "Le prix TTC des carottes est : " << prixTTC << " euros" << endl;

    return 0;
}
