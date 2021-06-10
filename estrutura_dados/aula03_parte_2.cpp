#include <iostream>
#include <string>

using namespace std;

struct Coordenada
{
    int x, y, z;
};

void imprimirDados(Coordenada pto);

int main()
{
    Coordenada pontoA;
    Coordenada pontoB;

    pontoA.x = 10;
    pontoA.y = 20;
    pontoA.z = 30;

    cout << "Digite a coordenada x: ";
    cin >> pontoB.x;

    cout << "\nDigite a coordenada y: ";
    cin >> pontoB.y;

    cout << "\nDigite a coordenada z: ";
    cin >> pontoB.z;

    imprimirDados(pontoA);
    imprimirDados(pontoB);

    return 0;
}

void imprimirDados(Coordenada pto)
{
    cout << "Ponto B - x: " << pto.x << endl << endl;
    cout << "Ponto B - y: " << pto.y << endl << endl;
    cout << "Ponto B - z: " << pto.z << endl << endl;
}


