#include <iostream>
#include <string>

using namespace std;

struct Livro
{
    string titulo, editora, autor;
    float preco;
};

void insere(Livro v[], int &n, Livro l);

int main()
{

    return 0;
}

void insere(Livro v[], int &n, Livro l)
{
    v[n] = l;
    n++;
    cout << "\nOperação realizada com sucesso: ";
}
