#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string string1, string2;

    cout << "Entrez une chaine de caracteres : ";
    getline(cin, string1);

    string2 = "Bonjour";

    sort(string1.begin(), string1.end());
    sort(string2.begin(), string2.end());

    cout << "Chaine 1 trie : " << string1 << endl;
    cout << "Chaine 2 trie : " << string2 << endl;

    return 0;
}
