#include <iostream>

using namespace std;

struct nodo
{
    int num;
    struct nodo *prox;
};

int main()
{
    // criando no1
    nodo* no1 = new nodo;
    no1->num = 23;
    no1->prox = NULL;

    /* Insere ao Final */
    nodo* no2 = new nodo;
    no2->num = 13;
    no2->prox = no1;

    // exibindo
    cout << "\nValor do no1: " << no1->num;
    cout << "\nValor do no2: " << no2->num;
    cout << "\n\nEndereço do no1: " << no1;
    cout << "\nEndereço do no2: " << no2;
    cout << "\n\nEndereço apontado por no1: " << no1->prox;
    cout << "\nEndereço apontado por no2: " << no2->prox;
    cout << "\n";

    return 0;
}
