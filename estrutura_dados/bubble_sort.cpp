#include <iostream>

using namespace std;

void bubbleSort(int vet[], int tam);

void imprimeVetor(int vet[], int tam);

int main()
{
    int vet[] = {13, 23, 3, 8, 1};

    bubbleSort(vet, 5);

    imprimeVetor(vet, 5);

    return 0;
}

void bubbleSort(int vet[], int tam)
{
    int j, i, aux;

    for (i = 0; i < tam - 1; i++) {
        for (j = tam -1; j > i; j--) {
            if (vet[j] < vet[j-1]) {
                aux = vet[j];
                vet[j] = vet[j-1];
                vet[j-1] = aux;
            }
        }
    }
}

void imprimeVetor(int vet[], int tam)
{
    for (int i = 0; i < tam; i ++) {
        cout << vet[i] << endl;
    }
}
