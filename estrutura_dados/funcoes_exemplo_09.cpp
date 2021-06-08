#include <iostream>

using namespace std;

double calculoMedia(double notas[], int tamanho);

int main()
{
    double notas[5];

    for (int i = 0; i < 5; i++) {
        cout << "\nNota " << i + 1 << ": ";
        cin >> notas[i];
    }

    cout << "\n\nRelação das notas originais\n";

    for (int i = 0; i < 5; i++) {
        cout << notas[i] << "\t";
    }

    cout << "\n\nMédia da turma: " <<  calculoMedia(notas, 5);
    cout << "\n\n";

    return 0;
}

double calculoMedia(double notas[], int tamanho)
{
    double soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }

    return soma / tamanho;
}
