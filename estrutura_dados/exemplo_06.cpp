#include <iostream>

using namespace std;

float areaRetangulo(float base, float altura);

int main()
{
    float base, altura;
    cout << "Informe a base: " << endl;
    cin >> base;
    cout << "Informe a altura: " << endl;
    cin >> altura;

    cout << "A área do retângulo é: " << areaRetangulo(base, altura) << "m²" << endl;

    return 0;
}

float areaRetangulo(float base, float altura)
{
    return base * altura;
}
