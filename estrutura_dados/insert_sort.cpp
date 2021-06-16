#include <iostream>

using namespace std;

void insertSort(int vet[], int tam);

int main()
{
    int vet[] = {7, 8, 9, 2, 1, 0};

    insertSort(vet, 5);

    for (int i = 0; i < 5; i++) {
        cout << vet[i] << endl;
    }
    return 0;
}

void insertSort(int vet[], int tam)
{
    int i, j, aux;

    for (i = 1; i < tam - 1; i++) {

        aux = vet[i];

        j = i - 1;

        while (j >= 0 && aux < vet[j]) {

            vet[j+1] = vet[j];
            j--;

        }
    }
}
