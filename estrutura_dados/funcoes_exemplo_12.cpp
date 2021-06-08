#include <iostream>
#define Tamanho 10

using namespace std;

void dobro(double v1[], double v2[], int tam);

int main()
{
    double numeros[Tamanho], numerosDobro[Tamanho];
    for (int i = 0; i < Tamanho; i++) {
        cout << "\nNumero " << i + 1 << ": ";
        cin >> numeros[i];
    }
    dobro(numeros, numerosDobro, Tamanho);
    cout << "\nOriginal \tDobro\n";
    for (int i = 0; i < Tamanho; i++) {
        cout << "\n" << numeros[i] << "\t\t" << numerosDobro[i];
    }
    cout << "\n\n";

    return 0;
}

void dobro(double v1[], double v2[], int tam)
{
    for (int i = 0; i < tam; i++) {
        v2[i] = v1[i] * 2;
    }
}
