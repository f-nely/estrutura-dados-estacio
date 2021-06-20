#include <iostream>
#include <cstdlib>
#define TAM 3

using namespace std;

void media(float [], float [], float [], int);

void saida(float [], int t, float [], float []);

int main()
{
    float nota1[] = {7.5, 8, 9}, nota2[] = {6.5, 9.5, 10}, medias[TAM];

    media(nota1, nota2, medias, TAM);
    saida(nota1, TAM, nota2, medias);
    cout << "\n\n";

    return 0;
}

void media(float nt1[], float nt2[], float m[], int tam)
{
    for (int i = 0; i < tam; i++) {

        m[i] = (nt1[i] + nt2[i]) / 2;
    }
}

void saida(float n1[], int t, float n2[], float m[])
{
    for (int i = 0; i < t; i++) {
        cout << "\n" << n1[i] << "\t" << n2[i] << "\t" << m[i];
    }
}
