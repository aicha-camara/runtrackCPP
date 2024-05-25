#include <iostream>
using namespace std;

int main() {
    int n;

    do {

        cout << "donner un nombre plus grand que 0 ";
        cin >> n;
    } while (n <= 0);

    cout << n << " est plus grand que 0." << endl;

    return 0;
}
