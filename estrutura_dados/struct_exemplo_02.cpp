#include <iostream>

using namespace std;

struct Produtos
{
    char nomeProduto[21];
    float valorProduto;
}produto1 = {"martelo", 35.90}, produto2 = {"furadeira", 246.75}, aux;

int main()
{
    cout << "\nNome do Produto 1: " << produto1.nomeProduto << "\t" << produto1.valorProduto;
    cout << "\nNome do Produto 2: " << produto2.nomeProduto << "\t" << produto2.valorProduto;
    cout << "\n\n";

    return 0;
}
