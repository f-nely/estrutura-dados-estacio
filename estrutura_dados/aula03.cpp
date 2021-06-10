#include <iostream>
#include <string>

using namespace std;

struct Coordenada
{
    int x, y, z;
};

int main()
{
    Coordenada ponto[4];

    ponto[0].x = 10;
    ponto[0].y = 20;
    ponto[0].z = 50;

    cout << "Coordenada A - x: " << ponto[0].x << endl;
    cout << "Coordenada A - y: " << ponto[0].y << endl;
    cout << "Coordenada A - z: " << ponto[0].z << endl << endl;

    ponto[1].x = 33;
    ponto[1].y = 44;
    ponto[1].z = 66;

    cout << "Coordenada B - x: " << ponto[1].x << endl;
    cout << "Coordenada B - y: " << ponto[1].y << endl;
    cout << "Coordenada B - z: " << ponto[1].z << endl << endl;

    ponto[2].x = 4;
    ponto[2].y = 7;
    ponto[2].z = 9;

    cout << "Coordenada C - x: " << ponto[2].x << endl;
    cout << "Coordenada C - y: " << ponto[2].y << endl;
    cout << "Coordenada C - z: " << ponto[2].z << endl << endl;

    ponto[3].x = 40;
    ponto[3].y = 70;
    ponto[3].z = 90;

    cout << "Coordenada D - x: " << ponto[3].x << endl;
    cout << "Coordenada D - y: " << ponto[3].y << endl;
    cout << "Coordenada D - z: " << ponto[3].z << endl << endl;

    return 0;
}

