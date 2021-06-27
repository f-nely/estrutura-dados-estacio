#include <iostream>

using namespace std;

struct nodo
{
    int num;
    struct nodo * prox;
};

int main()
{
    // criando primeiro no
    nodo* no1 = new nodo;
    no1->num = 23;
    no1->prox = NULL;

    // criando segundo no
    nodo* no2 = new nodo;
    no1->prox = no2;
    no2->num = 13;
    no2->prox = NULL;


    // exibindo
    cout << "\nValor do no1: " << no1->num;
    cout << "\nValor do no2: " << no2->num;
    cout << "\n\nEndereço do no1: " << no1;
    cout << "\n\nEndereço do no2: " << no2;
    cout << "\n\nEndereço apontado por no1: " << no1->prox;
    cout << "\n\nEndereço apontado por no2: " << no2->prox;

    // liberando
    delete no1;
    no1 = 0;
    delete no2;
    no2 = 0;

    cout << "\n\n";

    return 0;
}


