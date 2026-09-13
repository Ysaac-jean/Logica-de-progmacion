#include <iostream>

using namespace std;

int main() {
    int edad;
    bool V;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << "¿Tienes pase VIP? (1 para SI, 0 para NO): ";
    cin >> V;

    if (edad >= 18 && V) {
        cout << "Acceso permitido" << endl;
    }
    else {
        cout << "Acceso denegado" << endl;
    }

    return 0;
}