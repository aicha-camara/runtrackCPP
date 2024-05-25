#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Définition de la structure Staff
struct Staff {
    string nom;
    string prenom;
};

struct Etudiant {
    string nom;
    string prenom;
};

int main() {
    Staff alicia;
    alicia.nom = "Cordial";
    alicia.prenom = "Alicia";

    Staff pierre;
    pierre.nom = "Malardier";
    pierre.prenom = "Pierre";

    cout << "Prénoms des membres du staff :" << endl;
    cout << "1. " << alicia.prenom << endl;
    cout << "2. " << pierre.prenom << endl;

    vector<Etudiant> etudiants;

    int nombreEtudiants;
    cout << "\nCombien d'étudiants voulez-vous ajouter ? ";
    cin >> nombreEtudiants;

    for (int i = 0; i < nombreEtudiants; ++i) {
        Etudiant etudiant;
        cout << "Nom de l'étudiant " << i + 1 << " : ";
        cin >> etudiant.nom;
        cout << "Prénom de l'étudiant " << i + 1 << " : ";
        cin >> etudiant.prenom;
        etudiants.push_back(etudiant);
    }

    cout << "\nPrénoms des étudiants :" << endl;
    for (size_t i = 0; i < etudiants.size(); ++i) {
        cout << i + 1 << ". " << etudiants[i].prenom << endl;
    }

    return 0;
}
