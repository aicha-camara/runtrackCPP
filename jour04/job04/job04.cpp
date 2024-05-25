#include <iostream>
using namespace std;

int main() {

    int var1 = 10;
    int var2 = 20;
    int var3 = 30;

    int *pvar1 = &var1;
    int *pvar2 = &var2;
    int *pvar3 = &var3;

    cout <<"var1 = " << var1 << endl;
    cout <<"var2 = " << var2 <<endl;
    cout <<"var3 = " << var3 << endl;

    *pvar1 = 100;
    *pvar2 = 200;
    *pvar3 = 300;

    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    cout <<"var3 = " << var3 << endl;

    return 0;
}
