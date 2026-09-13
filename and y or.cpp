#include <iostream>

int main() {
    bool a, b;
    std::cout << "Ingresa dos valores binarios (0 o 1): ";
    std::cin >> a >> b;

    std::cout << "A AND B: " << (a && b) << "\n";
    std::cout << "A OR B:  " << (a || b) << "\n";

    return 0;
}s