#include <iostream>
#include <string>

using namespace std;

void selectionSort(int vet[], int tam);
void imprimirVetor(int vet[], int tam);

int main()
{
    int vetor[5] = {13, 23, 3, 8, 1};
    int i;

    // antes da troca
    imprimirVetor(vetor, 5);
    cout << "\n\n";

    selectionSort(vetor, 5);

    cout << "\n\n";

     // após a troca
    imprimirVetor(vetor, 5);
    cout << "\n\n";

    return 0;
}

void selectionSort(int vet[], int tam)
{
    int indexMin , i, j;

    // percorrer todos os números
    for (i = 0; i < tam - 1; i++) {

        // define o elemento atual como o menor
        indexMin = i;

        // encontra o menor valor após "i + 1"
        for (j = i + 1; j < tam; j++) {
            if (vet[j] < vet[indexMin]) {
                indexMin = j;
            }
        }

        cout << "Troca: " << vet[i] << " <= " << vet[indexMin] << endl;

        if (indexMin != i) {
            // troca os números
            int temp = vet[indexMin];
            vet[indexMin] = vet[i];
            vet[i] = temp;
        }
    }
}

void imprimirVetor(int vet[], int tam)
{
    int i;

    cout << vet[0];

    // após a troca
    for (i = 1; i < 5; i ++) {

        cout << ", " << vet[i];
    }

    cout << endl;
}
