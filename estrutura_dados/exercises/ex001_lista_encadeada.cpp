#include <iostream>

using namespace std;

struct Empregado
{
    long int matricula;
    float salario;
    Empregado *proximo;
};

int main()
{
    Empregado *pont = new Empregado;
    pont->salario = 5000;
    pont->proximo = NULL;

    cout << "Salário: " << pont->salario << endl;

    return 0;
}
