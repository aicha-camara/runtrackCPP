#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "Saisir trois nombres : ";
    cin >> a >> b >> c;

    
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    
    cout << "Le plus grand des trois entiers est : " << max << endl;

    return 0;
}
