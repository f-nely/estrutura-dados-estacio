#include <iostream>

using namespace std;

struct Produto
{
    char nomeProd[21];
    float valor;
}tv = {"smart tv", 4000};

int main()
{
    cout << "Nome produto: " << tv.nomeProd << endl;
    cout << "Valor produto: " << tv.valor << endl;

    return 0;
}
