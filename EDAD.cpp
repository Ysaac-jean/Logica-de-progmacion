#include <iostream>
using namespace std;

int main()
{
    int ED;
    cout << "Ingrese la edad: ";
    cin >> ED;

    if (ED >= 0 && ED <= 3)
    {
        cout << "BEBE";
    }
    else if (ED >= 4 && ED <= 14) 
    {
        cout << "NIÑO";
    }
    else if (ED >= 15 && ED <= 18)
    {
        cout << "JOVEN";
    }
    else if (ED >= 19 && ED <= 65)
    {
        cout << "ADULTO";
    }
    else if (ED > 65)
    {
        cout << "ADULTO 3RA";
    }
    else
    {
        cout << "Edad invalida"; 
    }

    return 0;
}