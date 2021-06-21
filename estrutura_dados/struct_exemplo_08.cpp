#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

struct
{
    float prova, trab;
} notas;

float mediaPond(float p, float t);

int main()
{
    cout << "\nDigite a nota da prova: ";
    cin >> notas.prova;
    cout << "\nDigite a nota do trabalho: ";
    cin >> notas.trab;
    cout << "\nMédia: " << mediaPond(notas.prova, notas.trab);
    cout << "\n\n";

    return 0;
}

float mediaPond(float p, float t)
{
    return (p * 6 + t * 4) / 10;
}

