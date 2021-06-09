#include <iostream>

using namespace std;

float calculaImposto(float salario);

int main()
{
    float salario;

    cout << "\nInforme o salário: ";
    cin >> salario;

    float imposto = calculaImposto(salario);

    cout << "\nO imposto é de R$" << imposto << endl;

    return 0;
}

float calculaImposto(float salario)
{
    float valorImposto;

    valorImposto = salario * 0.1;

    return valorImposto;
}
