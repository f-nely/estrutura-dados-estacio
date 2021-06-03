#include <iostream>

using namespace std;

int calculoIdade(int anoAtual, int anoNascimento);

int main()
{
    cout << calculoIdade(2021, 2000);

}

int calculoIdade(int anoAtual, int anoNascimento) {


    return anoAtual - anoNascimento;

}
