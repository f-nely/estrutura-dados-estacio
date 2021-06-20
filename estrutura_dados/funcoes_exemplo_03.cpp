#include <iostream>
#include <cmath>

using namespace std;

float jurosCompostos(float capitalInicial, float taxaJuros, int tempo);

int main()
{
    cout << jurosCompostos(2200, 2, 12) << endl;

    return 0;
}

float jurosCompostos(float capitalInicial, float taxaJuros, int tempo)
{
    float montante;

    montante = capitalInicial * pow((1+taxaJuros/100), tempo);
    //return montante - capitalInicial; retorna só os juros
    return montante;
}
