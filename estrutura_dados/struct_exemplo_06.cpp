#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

struct Saude
{
    char nome[21];
    float peso, altura, imc;
} atletas[500];

int main()
{
    strcpy(atletas[0].nome, "James Hill");
    atletas[0].peso = 79.8;
    atletas[0].altura = 1.80;
    atletas[0].imc = 24.63;

    cout << "Nome:    " << atletas[0].nome << endl;
    cout << "Peso:    " << atletas[0].peso << endl;
    cout << "Altura:  " << atletas[0].altura << endl;
    cout << "IMC:     " << atletas[0].imc << endl;

    return 0;
}
