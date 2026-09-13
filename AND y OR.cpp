#include <iostream>
using namespace std;
int main() {
    bool a, b;
    cout << "Ingresa dos valores binarios : ";
    cin >> a >> b;

    cout << "A AND B: " << (a && b) << endl;
    cout << "A OR B:  " << (a || b) << endl;

    return 0;
}