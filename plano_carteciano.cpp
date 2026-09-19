#include <iostream>
using namespace std;

int main()
{
    float x , y ;
    cout << "ingrese el valor de x : ";
    cin >> x;
    cout << "ingrese el volor de y : ";
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << "se encuentra en el primer cuadrante";
    }
    else if (x < 0 && y > 0)
    { 
        cout << "se encuentra en el segundo cuadrante";
    }
    else if (x < 0 && y < 0)
    {
        cout << "se encuentra en el tercer cuadrante";
    }
    else if (x > 0 && y < 0)
    {
        cout << "se encuentra en el cuarto cuadrante";
    }
    return 0;
}