#include <iostream>
#include <string>
using namespace std;

int main () {
    string texte = "Vive la plateforme !";
    int taille = 0;
    
    for (char caractere : texte ) {
	taille++;
    }

    cout << "la taille est " << taille << endl; 
    return 0;
}
