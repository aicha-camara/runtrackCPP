#include <iostream>
#include <string>
using namespace std;

int main () {
    string texte = "vive la plateform!";
    string texte_apres_transformation;

    for(char voyelle : texte) {
        if (voyelle != 'a' && voyelle != 'e' && voyelle != 'i' && voyelle != 'o' && voyelle != 'u' && voyelle != 'y') {
            texte_apres_transformation += voyelle;
        }
    }

    cout << "L'ancien texte:" << texte << "\nLa version sans voyelles:" << texte_apres_transformation << endl;
    return 0;
}
