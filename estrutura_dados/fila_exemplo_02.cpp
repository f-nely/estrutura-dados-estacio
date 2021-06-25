#include <iostream>
#include <cstdlib>
#define TAM 5

using namespace std;

struct queue
{
    float f[TAM];
    int inicio, fim;
};

void enfileira(queue &fila);
void desenfileira(queue &fila);
void primeiroElemento(queue &fila);
void situacaoFila(queue &fila);

int main()
{
    char resp[10];
    int op;
    queue fila;
    // inicializa a fila
    fila.inicio = 0;
    fila.fim = -1;

    do {
        system("clear");
        cout << "\nFILA (FIFO - FIRST IN - FIRST OUT)\n\n";
        cout << "\n1 - Inserir um valor na fila";
        cout << "\n2 - Remover um valor na fila";
        cout << "\n3 - Mostrar o elemento do início da fila";
        cout << "\n4 - Mostrar a situação da fila";
        cout << "\n5 - Sair";
        cout << "\nOpção: ";
        cin >> resp;
        op = atoi(resp);
        system("clear");

        switch(op) {
            case 1:
                enfileira(fila);
                break;
            case 2:
                desenfileira(fila);
                break;
            case 3:
                primeiroElemento(fila);
                break;
            case 4:
                situacaoFila(fila);
                break;
            case 5:
                cout << "\nPrograma finalizado!\n";
                break;
            default:
                cout << "\nOpção inválida!\n";
        }

        cout << "\n\n";

    } while(op != 5);

    return 0;
}

void enfileira(queue &fila)
{
    float valor;
    if (fila.fim == TAM-1) {
        cout << "\nAtenção. Fila cheia!\n";
    } else {
        cout << "Digite o valor a ser enfileirado: ";
        cin >> valor;
        fila.fim++;                // atualiza o final da fila
        fila.f[fila.fim] = valor;  // guarda o valor no final da fila
    }
}

void desenfileira(queue &fila)
{
    if (fila.inicio > fila.fim) {
        cout << "\nAtenção. Fila vazia!\n";
    } else {
        cout << "\nValor removido " << fila.f[fila.inicio]; // exibe o valor removido
        fila.inicio++; // atualiza o início da fila
    }
}

void primeiroElemento(queue &fila)
{
    if (fila.inicio > fila.fim) {
        cout << "\nAtenção. Fila vazia!\n";
    } else {
        cout << "\nElemento do inicio da fila: " << fila.f[fila.inicio];
    }
}

void situacaoFila(queue &fila)
{
    if (fila.inicio > fila.fim) {
        cout << "\nAtenção. Fila vazia!\n";
    } else {
        cout << "\nTotal de elementos da fila: " << fila.fim - fila.inicio+1 << "\n";
        cout << "\nEspaço disponível na fila: " << TAM-(fila.fim+1) << "\n";
        cout << "\nPosição do primeiro elemento da fila: " << fila.inicio << "\n";
        cout << "\nPosição do último elemento da fila: " << fila.fim << "\n";
        cout << "\nPara fins didáticos, exibindo a fila\n";
        cout << "\nValor\tPosição no vetor\n";
        for (int i=fila.inicio; i <= fila.fim; i++) {
            cout << "\n" << fila.f[i] << "\t" << i << endl;
        }
    }
}


