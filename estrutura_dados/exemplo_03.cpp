#include <iostream>

using namespace std;

float reajuste(float valor, float percentual);

int main()
{
    float valor, percentual, reajustado;

    cout<<"\nDigite o valor que devera ser reajustado R$ ";

    cin>>valor;

    cout<<"\nDigite o valor do percentual de reajuste de 0 a 100: ";

    cin>>percentual;

    cout <<"\nValor reajustado R$ "<< reajuste(valor, percentual) << endl;

    return 0;
}

float reajuste(float valor, float percentual)
{
    float reajustado;

    reajustado= valor + valor * percentual/100;

    return reajustado;
}
