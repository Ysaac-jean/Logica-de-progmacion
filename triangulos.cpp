#include <iostream>
using namespace std;

int main()
{
    int ca, co, h;
    cout << "Coloque los lados del triangulo : ";
    cin >> ca >> co >> h;

    
    if (ca == co && co == h)
    {
        cout << "es equilatero";
    }
    s
    else if (ca == co || ca == h || co == h)
    {
        cout << "es isosceles";
    }
    
    else
    {
        cout << "es escaleno";
    }

    return 0;
}