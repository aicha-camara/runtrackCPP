#include <iostream>
using namespace std;

int main() {
    int tableau[] = {1, 2, 3, 4, 5};

    for (int &element : tableau) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
