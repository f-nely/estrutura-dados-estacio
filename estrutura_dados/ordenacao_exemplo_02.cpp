#include <iostream>

using namespace std;

void insercao(int vet[], int tam);

int main()
{
    int arr[] = {13, 23, 3, 8, 1};
    int tam = sizeof(arr)/sizeof(arr[0]);

    insercao(arr, tam);

    for (int i = 0; i < tam; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

void insercao(int vet[], int tam)
{
    int j, i, aux;
    for (i = 1; i < tam; i++) {
        aux = vet[i];

        for (j = i; j > 0 && aux < vet[j-1]; j--) {
            aux = vet[j];
            vet[j] = vet[j-1];
            vet[j-1] = aux;
        }
    }
}
