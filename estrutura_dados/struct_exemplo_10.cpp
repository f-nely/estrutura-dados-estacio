#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

struct Notas
{
    float prova, trab;
} notas;

float mediaPond(Notas n);

int main()
{
    Notas aluno;

    cout << "\nDigite a nota da prova: ";
    cin >> aluno.prova;
    cout << "\nDigite a nota do trabalho: ";
    cin >> aluno.trab;
    cout << "\nMédia: " << mediaPond(aluno);
    cout << "\n\n";

    return 0;
}

float mediaPond(Notas n)
{
    return (n.prova * 6 + n.trab * 4) / 10;
}


