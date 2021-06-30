#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct nodo
{
    int info;
    struct nodo* prox;
};

nodo* insereFrente(nodo* plista, int valor);
void exibeTopo(nodo* plista);
void exibeLista(nodo* plista);
nodo* remover(nodo* plista);
void libera(nodo* plista);

int main()
{
    // pilha encadeada
    int c, op, valor;
    nodo* lista = NULL;

    do {
        system("clear");

        cout << "= = = Alocação Dinâmica = = =\n";

        cout << "\n 1 - Insere na pilha";
        cout << "\n 2 - Remove da pilha";
        cout << "\n 3 - Exibe elemento do topo";
        cout << "\n 4 - Libera pilha";
        cout << "\n 5 - Lista pilha";
        cout << "\n 6 - Sair";

        cout << "\n\n Opção";
        cin >> op;

        system("clear");

        switch (op) {

            case 1:
                cout << "\nDigite o número: ";
                cin >> valor;

                lista = insereFrente(lista, valor);
                break;

            case 2:
                if (!lista) {
                    cout << "\n\nNada a remover. Pilha vazia\n";
                } else {
                    lista = remover(lista);
                    cout << "\n\nPrimeiro elemento da pilha removido\n";
                }
                break;

            case 3:
                exibeTopo(lista);
                break;

            case 4:
                if (lista) {
                    cout << "\nTem elemento na pilha\n";
                } else {
                    libera(lista);
                    cout << "\nLiberando memória";
                }
                break;

            case 5:
                if (!lista) {
                    cout << "\nLista vazia\n";
                } else {
                    exibeLista(lista);
                }
                break;

            case 6:
                cout << "Fechando pilha dinâmica\n";
                break;

            default:
                cout << "\nOpção Inválida\n";
        }

    } while(op != 6);

    return 0;
}

nodo* insereFrente(nodo* plista, int valor)
{
    nodo* temp = new nodo;
    if (!temp) {
        cout << "\nNão foi possível fazer alocação\n";
    }
    temp->info = valor;
    temp->prox = plista;

    return temp;
}

void exibeTopo(nodo* plista)
{
    if (!plista)
        cout << "\n\nPilha vazia\n";
    else
        cout << "\nValor do elemento do topo: " << plista->info;
}

void exibeLista(nodo* plista)
{
    cout << "\nListando\n";
    while (plista) {
        cout << "\n" << plista->info;
        plista = plista->prox;
    }
}
nodo* remover(nodo* plista)
{
    nodo* aux;
    aux = plista;
    plista = plista->prox;
    delete aux;

    return plista;
}

void libera(nodo* plista)
{
    delete plista;
    plista = 0;
}
