#include <iostream>

using namespace std;

struct nodo
{
    int num;
    struct nodo * prox;
};

int main()
{
    nodo* lista = new nodo; // criando primeiro no
    lista->num = 23;
    lista->prox = NULL;

    lista->prox = new nodo; // criando segundo no
    lista->prox->num = 13;
    lista->prox->prox = NULL;

    // exibindo
    cout << "\nValor do primeiro no: " << lista->num;
    cout << "\nValor do segundo no: " << lista->prox->num;
    cout << "\nValor do endereço do primeiro no: " << lista;
    cout << "\nValor do endereço do segundo no: " << lista->prox;

    // liberando
    delete lista;
    cout << "\n\nEndereço armazenado na variável lista, mesmo depois do delete: " << lista;
    lista = 0;
    cout << "\nEndereço armazenado na variável lista da atribuição: " << lista;
    cout << "\n";

    return 0;
}

