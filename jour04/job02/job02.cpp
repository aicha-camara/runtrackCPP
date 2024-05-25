#include <iostream>
using namespace std;

int main() {
    int var1 = 10;
    int var2 = 20;

    int *pvar1 = &var1;
    int *pvar2 = &var2;
    
    int temp = *pvar1;
    *pvar1 = *pvar2;
    *pvar2 = temp;

    cout << "La valeur de 1 :" << *pvar1 << endl;
    cout << "La valeur de 2 :" << *pvar2 << endl;
    return 0;

}