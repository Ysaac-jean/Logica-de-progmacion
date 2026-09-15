#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre1, nombre2;
    double puntos1, puntos2;

    if (cin >> nombre1 >> puntos1 >> nombre2 >> puntos2) {
        if (puntos1 > puntos2) {
            cout << nombre1 << endl;
        }
        else {
            cout << nombre2 << endl;
        }
    }

    return 0;
}