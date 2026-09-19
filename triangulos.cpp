#include <iostream>
using namespace std;

int main()
{
    int ca, co, h;
    cout << "Coloque los lados del triangulo : ";
    cin >> ca >> co >> h;

    // Equilátero: los tres lados son iguales
    if (ca == co && co == h)
    {
        cout << "es equilatero";
    }
    // Isósceles: al menos dos lados son iguales
    else if (ca == co || ca == h || co == h)
    {
        cout << "es isosceles";
    }
    // Escaleno: ningún lado es igual
    else
    {
        cout << "es escaleno";
    }

    return 0;
}