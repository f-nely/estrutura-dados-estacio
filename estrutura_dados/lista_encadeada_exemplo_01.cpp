#include <iostream>

using namespace std;

struct nodo
{
    int num;
    struct nodo * prox;
};

int main()
{
    nodo* no1 = new nodo;
    no1->num = 23;
    no1->prox = NULL;

    cout << "\nValor do no1: " << no1->num;
    cout << "\n";

    delete no1;
    no1 = 0;

    cout << "\n";

    return 0;
}
