#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct listaDE
{
    int info;
    struct listaDE* ant;
    struct listaDE* prox;
};

listaDE* insere(listaDE* lista, int valor);
void exibe(listaDE* lista);
listaDE* remover(listaDE* lista, int valor);
listaDE* busca(listaDE* lista, int valor);
int contaNos(listaDE* lista);
void libera(listaDE* lista);

int main()
{
    int op, valor;

    // inicializa a lista duplamente encadeada
    struct listaDE* lista = NULL;

    do {
        system("clear");

        cout << "- - - Alocação Dinâmica - - -\n\n";

        cout << "\n 1 - Insere na 1ª posição ";
        cout << "\n 2 - Remove da Lista DE  ";
        cout << "\n 3 - Exibe a Lista DE ";
        cout << "\n 4 - Conta nos da Lista DE ";
        cout << "\n 5 - Libera a Lista DE ";
        cout << "\n 6 - Sair  ";

        cout << "\n\nOpção: ";
        cin >> op;

        system("clear");

        switch(op) {

            case 1:
                cout << "\nDigite valor a ser inserido: ";
                cin >> valor;
                lista = insere(lista, valor);
                break;

            case 2:
                if (!lista) {
                    cout << "\n\nNada a remover. Lista vazia\n";
                } else {
                    cout << "\nDigite valor a ser removido: ";
                    cin >> valor;
                    lista = remover(lista, valor);
                }
                break;

            case 3:
                if (!lista) {
                    cout << "\n\nLista vazia\n";
                } else {
                    exibe(lista);
                }
                break;

            case 4:
                if (!lista) {
                    cout << "\n\nLista vazia\n";
                } else {
                    cout << "\nTotal de nos: " << contaNos(lista);
                }
                break;

            case 5:
                if (lista) {
                    cout << "\nTem elementos na lista\n";
                } else {
                    libera(lista);
                    cout << "\nLiberando memória";
                }
                break;

            case 6:
                cout << "Fechando Lista Duplamente Encadeada\n";
                break;

            default:
                cout << "\nOpção Inválido\n";

        }

    } while(op != 6);

    return 0;
}

listaDE* insere(listaDE* lista, int valor)
{
    listaDE* novo = new listaDE;
    novo->info = valor;
    novo->prox = lista;
    novo->ant = NULL;

    if (lista) {
        lista->ant = novo;
    }

    return novo;
}

void exibe(listaDE* lista)
{
    listaDE* ptr;
    for (ptr = lista; ptr != NULL; ptr = ptr->prox) {
        cout << "\n" << ptr->info;
    }
}

listaDE* remover(listaDE* lista, int valor)
{
    listaDE* p = busca(lista, valor);
    if (!p) {
        cout << "\nValor não achado\n";
        return lista;
    }
    if (lista == p)
        lista = p->prox;
    else
        p->ant->prox = p->prox;
    if (p->prox)
        p->prox->ant = p->ant;
    cout << "\nValor removido\n";
    delete p;

    return lista;
}

listaDE* busca(listaDE* lista, int valor)
{
    listaDE* ptr;
    for (ptr = lista; ptr != NULL; ptr = ptr->prox) {
        if (ptr->info == valor)
            return ptr;
    }

    return NULL;
}

int contaNos(listaDE* lista)
{
   int conta = 0;

   while (lista != NULL) {
        conta++;
        lista = lista->prox;
   }

   return conta;
}

void libera(listaDE* lista)
{
    delete lista;
    lista = 0;
}


