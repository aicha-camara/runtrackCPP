#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Note {
    string nom;
    string prenom;
    double note;
};

void ajouterNote(vector<Note>& listeNotes) {
    Note nouvelleNote;
    cout << "Entrez le nom de l'etudiant : ";
    cin >> nouvelleNote.nom;
    cout << "Entrez le prenom de l'etudiant : ";
    cin >> nouvelleNote.prenom;
    cout << "Entrez la note de l'etudiant : ";
    cin >> nouvelleNote.note;

    listeNotes.push_back(nouvelleNote);

    cout << "Note ajoutee avec succes." << endl;
}

void afficherListeNotes(const vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        cout << "Aucune note n'a ete enregistree." << endl;
        return;
    }

    cout << "Liste des notes enregistrees :" << endl;
    for (const auto& note : listeNotes) {
        cout << "Nom : " << note.nom << ", Prenom : " << note.prenom << ", Note : " << note.note << endl;
    }
}

void supprimerNote(vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        cout << "Aucune note n'a ete enregistree." << endl;
        return;
    }

    string nom, prenom;
    cout << "Entrez le nom de l'etudiant dont vous voulez supprimer la note : ";
    cin >> nom;
    cout << "Entrez le prenom de l'etudiant : ";
    cin >> prenom;

    bool noteTrouvee = false;
    for (auto it = listeNotes.begin(); it != listeNotes.end(); ++it) {
        if (it->nom == nom && it->prenom == prenom) {
            listeNotes.erase(it);
            cout << "Note supprimee avec succes." << endl;
            noteTrouvee = true;
            break;
        }
    }

    if (!noteTrouvee) {
        cout << "Note non trouvee pour cet etudiant." << endl;
    }
}

void afficherMoyenne(const vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        cout << "Aucune note n'a ete enregistree." << endl;
        return;
    }

    double somme = 0.0;
    for (const auto& note : listeNotes) {
        somme += note.note;
    }

    double moyenne = somme / listeNotes.size();
    cout << "La moyenne des notes est : " << fixed << setprecision(2) << moyenne << endl;
}

int main() {
    vector<Note> listeNotes;

    int choix;

    do {
        cout << "\n=== Menu ===" << endl;
        cout << "1. Ajouter une note" << endl;
        cout << "2. Afficher la liste de notes" << endl;
        cout << "3. Supprimer une note d'un etudiant" << endl;
        cout << "4. Afficher la moyenne des notes" << endl;
        cout << "5. Quitter" << endl;
        cout << "Entrez votre choix (1-5) : ";
        cin >> choix;

        switch (choix) {
            case 1:
                ajouterNote(listeNotes);
                break;
            case 2:
                afficherListeNotes(listeNotes);
                break;
            case 3:
                supprimerNote(listeNotes);
                break;
            case 4:
                afficherMoyenne(listeNotes);
                break;
            case 5:
                cout << "Programme termine." << endl;
                break;
            default:
                cout << "Choix invalide. Veuillez entrer un nombre entre 1 et 5." << endl;
                break;
        }

    } while (choix != 5);

    return 0;
}
