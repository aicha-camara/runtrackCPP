#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p;
    Point *pointeur = &p;

    pointeur->x = 10;
    pointeur->y = 20;

    cout << "Les valeur de la structure :  x = "  << pointeur->x << " et y = " << pointeur->y << endl;

    return 0;
}
