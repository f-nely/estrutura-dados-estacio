#include <iostream>
#include <string>

using namespace std;

void insertSort(int vet[], int tam);
void imprimirVetor(int vet[], int tam);

int main()
{
    int vetor[5] = {13, 23, 3, 8, 1};
    int i;

    // antes da troca
    imprimirVetor(vetor, 5);
    cout << "\n\n";

    insertSort(vetor, 5);

    cout << "\n\n";


     // após a troca
    imprimirVetor(vetor, 5);
    cout << "\n\n";

     // após a troca
    /*for (i = 0; i < 5; i++) {
        cout << vetor[i] << "\t";
    }*/

    return 0;
}

void insertSort(int vet[], int tam)
{
    int valueInsert;
    int posInsert;
    int i;

    // percorrer todos os números
    for (i = 1; i < tam; i++) {

        // seleciona um valor a ser inserido
        valueInsert = vet[i];

        // seleciona a posição onde o número deve ser inserido
        posInsert = i;

        cout << "-------------------------------------\n";
        imprimirVetor(vet, 5);
        cout << "-------------------------------------\n";
        cout << "Valor: " << valueInsert << endl;
        cout << "Posição Inserção: " << posInsert << endl << endl;

        // verifique se anterior não é maior que o valor a ser inserido
        while (posInsert > 0 && vet[posInsert - 1] > valueInsert) {
            vet[posInsert] = vet[posInsert - 1];
            posInsert--;
            imprimirVetor(vet, 5);
        }

        if (posInsert != i) {
            cout << "\tInsere: " << valueInsert << " na posição: " << posInsert << endl;
            vet[posInsert] = valueInsert;
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

