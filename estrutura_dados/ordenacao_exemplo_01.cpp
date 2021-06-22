#include <iostream>

using namespace std;

void selecao(int vet[], int tam);

int main()
{
    int arr[5] = {13, 23, 3, 8, 1};

    int tam;

    tam = sizeof(arr) / sizeof(arr[0]);

    selecao(arr, tam);

    for (int i = 0; i < tam; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}

void selecao(int vet[], int tam)
{
    int j, i, aux;

    for (i = 0; i < tam-1; i++) {

        for (j = i+1; j < tam; j++) {

            if (vet[i] > vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }

        }
    }
}
