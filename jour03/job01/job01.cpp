#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string texte = "vive la plateforme !";

    transform(texte.begin(), texte.end(), texte.begin(), ::toupper);
    cout << "\033[31m" << texte << "\033[0m" << endl;

    return 0;
}
