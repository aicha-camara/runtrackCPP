#include <iostream>
using namespace std;

int main() {
    int entier, somme = 0;

    // Demander à l'utilisateur de saisir cinq entiers
    cout << "Entrez cinq entiers : ";
    for (int i = 0; i < 5; i++) {
        cin >> entier;
        somme += entier; // Ajouter l'entier à la somme
    }

    // Calculer la moyenne en divisant la somme par cinq
    double moyenne = somme / 5.0;

    // Afficher la moyenne
    cout << "La moyenne des cinq entiers est : " << moyenne << endl;

    return 0;
}
