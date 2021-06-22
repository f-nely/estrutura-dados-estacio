#include <iostream>

using namespace std;

void bolha(int vet[], int tam);

int main()
{
    int arr[] = {13, 23, 3, 8, 1};
    int tam = sizeof(arr)/sizeof(arr[0]);

    bolha(arr, tam);

    for (int i = 0; i < tam; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

void bolha(int vet[], int tam)
{
    int j, i, aux;

    for (i = 0; i < tam-1; i++) {

        for (j = tam-1; j > i; j--) {

            if (vet[j] < vet[j-1]) {

                aux = vet[j];
                vet[j] = vet[j-1];
                vet[j-1] = aux;

            }
        }
    }
}
