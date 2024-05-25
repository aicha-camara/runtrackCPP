#include <iostream>
using namespace std;

int main() {
    int x = 5;
    for (int i = 1; i <= 10; i++) {
        int table = x * i;
        cout << "Le résultat de la table de " << x << " : " << x << " * " << i << " = " << table << endl;
    }
    return 0;
}

