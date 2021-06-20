#include <iostream>

using namespace std;

void reajustaSalario(float &);

int main()
{
    float salario = 2000;

    reajustaSalario(salario);
    cout << "\nApós chamar a função: " << salario;
    cout << "\n\n";

    return 0;
}

void reajustaSalario(float &s)
{
    s *= 1.08;
}
