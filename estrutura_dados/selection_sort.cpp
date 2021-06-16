#include <iostream>

using namespace std;

void selectionSort(int vet[], int tam);

int main()
{
    int vet[] = {13, 23, 3, 8, 1};

    selectionSort(vet, 5);

    for (int i = 0; i < 5; i++) {
        cout << vet[i] << endl;
    }

    return 0;
}

void selectionSort(int vet[], int tam)
{
    int i, j, aux, temp;

    for (i = 0; i < tam - 1; i++) {
        aux = i;
        for (j = i + 1; j < tam; j++) {
            if (vet[aux] > vet[j]) {
                aux = j;
                temp = vet[aux];
                vet[aux] = vet[i];
                vet[i] = temp;
            }
        }
    }
}
