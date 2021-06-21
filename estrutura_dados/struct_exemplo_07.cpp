#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

struct Data
{
    int dia, mes, ano;
};

struct Saude
{
    float peso, altura, imc;
    Data niver;
} atleta[100];

int main()
{
    atleta[0].peso = 86;
    atleta[0].altura = 1.90;
    atleta[0].niver.dia = 16;
    atleta[0].niver.mes = 11;
    atleta[0].niver.ano = 1990;

    cout << "Peso:              " << atleta[0].peso << endl;
    cout << "Altura:            " << atleta[0].altura << endl;
    cout << "Data Nascimento:   " << atleta[0].niver.dia << "-" << atleta[0].niver.mes << "-" << atleta[0].niver.ano << endl;
    return 0;
}
