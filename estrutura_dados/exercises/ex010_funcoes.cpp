#include <iostream>

using namespace std;

int valor = 100;

void eureka(int &z);

int main()
{
    int r = 1000;

    eureka(r);

    cout << "Result = " << r << " Valor = " << valor << endl;

    return 0;
}

void eureka(int &z)
{
    int temp = 25;

    z--;

    temp = temp - 10;

    valor = valor - temp;

    cout << "Auxiliar = " << temp << endl;
}
