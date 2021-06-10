#include <iostream>

using namespace std;

struct Coordenadas
{
    int x, y;
};

int main()
{
    Coordenadas a = {-5, 2}, b = {6, 5};

    cout << "\nCoordenadas de a (" << a.x << ", " << a.y << ")";
    cout << "\nCoordenadas de b (" << b.x << ", " << b.y << ")";
    cout << "\n\n";

    return 0;
}
