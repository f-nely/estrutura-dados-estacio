#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct nodo
{
    int info;
    struct nodo* prox;
};

nodo* insereFim(nodo* fila, int valor);
void exibePrimeiro(nodo* fila);
void exibeLista(nodo* fila);
nodo* remover(nodo* fila);
void libera(nodo* fila);

int main()
{
    // fila encadeada
    int c, op, valor;
    nodo* lista = NULL;

    do {
        system("clear");

        cout << "= = = Alocação Dinâmica = = =\n";

        cout << "\n 1 - Insere na fila";
        cout << "\n 2 - Remove da fila";
        cout << "\n 3 - Exibe  o primeiro da fila";
        cout << "\n 4 - Libera fila";
        cout << "\n 5 - Exibe fila";
        cout << "\n 6 - Sair";

        cout << "\n\n Opção";
        cin >> op;

        system("clear");

        switch (op) {

            case 1:
                cout << "\nDigite o número: ";
                cin >> valor;

                lista = insereFim(lista, valor);
                break;

            case 2:
                if (!lista) {
                    cout << "\n\nNada a remover. Fila vazia\n";
                } else {
                    lista = remover(lista);
                    cout << "\n\nPrimeiro elemento da pilha removido\n";
                }
                break;

            case 3:
                if (!lista) {
                    cout << "\n\nFila vazia\n";
                } else {
                    exibePrimeiro(lista);
                }
                break;

            case 4:
                if (lista) {
                    cout << "\nTem elemento na fila\n";
                } else if (!lista) {
                    cout << "\n\nFila vazia\n";
                } else {
                    libera(lista);
                    cout << "\nLiberando memória";
                }
                break;

            case 5:
                if (!lista) {
                    cout << "\nFila vazia\n";
                } else {
                    exibeLista(lista);
                }
                break;

            case 6:
                cout << "Fechando fila dinâmica\n";
                break;

            default:
                cout << "\nOpção Inválida\n";
        }

    } while(op != 6);

    return 0;
}

nodo* insereFim(nodo* fila, int valor)
{
    nodo* novo, *aux;
    novo = new nodo;

    if (!novo) {
        cout << "\nNão foi possível fazer alocação\n";
        exit(1);
    }
    novo->info = valor;
    novo->prox = NULL;

    if (fila == NULL) {
        fila = novo;
    } else {
        aux = fila;
        while (aux->prox)
            aux = aux->prox;
        aux->prox = novo;
    }

    return fila;
}

void exibePrimeiro(nodo* fila)
{
    if (!fila)
        cout << "\n\nFila vazia\n";
    else
        cout << "\nValor do elemento da fila: " << fila->info;
}

void exibeLista(nodo* fila)
{
    cout << "\nExibindo\n";
    while (fila) {
        cout << fila->info << "\t";
        fila = fila->prox;
    }
}
nodo* remover(nodo* fila)
{
    nodo* aux;
    aux = fila;
    fila = fila->prox;
    delete aux;

    return fila;
}

void libera(nodo* fila)
{
    delete fila;
    fila = 0;
}

