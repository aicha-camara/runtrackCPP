#include <iostream>
#include <string>
using namespace std;

int main() {
    int entier = 17;
    float flottant = 3.14;
    double reel = 123.345;
    string caractere = "La Plateforme";

    int *pentier = &entier;
    float *pflottant = &flottant;
    double *preel = &reel;
    string *pcaractere = &caractere;

    cout << "entier : sa valeur " << *pentier <<" et son adresse " << &entier <<endl;
    cout << "flottant : sa valeur " << *pflottant <<" et son adresse " << &flottant <<endl;
    cout << "reel : sa valeur " << *preel << " et son adresse " << preel << endl;
    cout << "caractere : sa valeur " << *pcaractere <<" et son adresse " << &caractere <<endl;
    return 0;

}