#include  <iostream>

using namespace std;

void selectionSort(int vet[], int tam);

void insertSort(int vet[], int n);

void bubbleSort(int vet[], int tam);

void imprimeVetor(int vet[], int n);

int main()
{

    int vet[] = {13, 23, 3, 8, 1};

    int n = sizeof(vet) / sizeof(vet[0]);

    //selectionSort(vet, 5);

    insertSort(vet, n);

    //bubbleSort(vet, 5);

    imprimeVetor(vet, n);

    return 0;
}

void selectionSort(int vet[], int tam)
{
   int i, j, aux, temp;

   for (i = 0; i < tam-1; i++) {

        aux = i;

        for (j = i+1; j < tam; j++) {

            if (vet[aux] > vet[j]) {

                aux = j;
                temp = vet[aux];
                vet[aux] = vet[i];
                vet[i] = temp;

            }
        }
   }
}

void bubbleSort(int vet[], int tam)
{

    int i, j, aux;

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

void insertSort(int vet[], int n)
{
    int i, key, j;

    for (i = 1; i < n; i++) {

        key = vet[i];
        j = i - 1;

        while (j >= 0 && vet[j] > key) {

            vet[j + 1] = vet[j];
            j = j - 1;

        }

            vet[j + 1] = key;
    }
}

void imprimeVetor(int vet[], int n)
{
    for (int i = 0; i < n; i++) {

        cout << vet[i] << " ";
        cout << endl;

    }
}
