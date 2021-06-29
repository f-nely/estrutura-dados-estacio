#include <iostream>

using namespace std;

struct nodo
{
    int info;
    nodo *link;
};

int main()
{
    nodo* no = new nodo; // criando nó
    no->info = 23; // atribuindo (*no).info = 23
    no->link = NULL;

    cout << "Valor do no: " << no->info << "\n";

    delete no;
    no = 0;

    return 0;
}


