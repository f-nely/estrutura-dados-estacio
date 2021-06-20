#include <iostream>
#include <cstdlib>

using namespace std;

float dobra(float n);

float soma(float n);

int main()
{
    float num = 20;

    cout << "\nApós chamar a função soma: " << soma(num);
    cout << "\nApós chamar a função dobra: " << dobra(num);
    cout << "\n\n";

    return 0;
}

float dobra(float n)
{
    return n*2;
}

float soma(float n)
{
    return dobra(n)+5;
}


