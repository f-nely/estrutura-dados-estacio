#include <iostream>
#include <string>

using namespace std;

struct nodo
{
    float valor;
    string produto;
    nodo* proximo;
};

int main()
{
    nodo* ptr = new nodo;
    ptr->valor = 5.60;
    ptr->proximo = NULL;

    cout << "Valor: " << ptr->valor;
    cout << "\nEndereço de ptr: " << ptr;
    cout << "\nEndereço apontado por ptr: " << ptr->proximo << "\n";

    return 0;
}
