#include <iostream>
using namespace std;

int main() {
    int x = 12; 
    int &refX = x; 

    cout << "Valeur de x avant modification : " << x << endl;
    refX = 24;

    cout << "Valeur de x après modification : " << x << endl;

    return 0;
}
