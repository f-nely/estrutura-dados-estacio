#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

struct
{
    float prova, trab;
} notas;

void alteraNota(float &);

int main()
{
    cout << "\nDigite a nota da prova: ";
    cin >> notas.prova;
    alteraNota(notas.prova);
    cout << "\nNota alterada: " << notas.prova << "\tGostou?";
    cout << "\n\n";

    return 0;
}

void alteraNota(float &p)
{
    p = 10;
}

