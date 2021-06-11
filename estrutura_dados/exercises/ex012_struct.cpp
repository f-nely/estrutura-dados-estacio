#include <iostream>

using namespace std;

struct Livro
{
    int codigo;
    float preco;
}liv;

int main()
{
    liv.preco = 30.70;

    cout << "Preço do livro R$" << liv.preco << endl;

    return 0;
}

