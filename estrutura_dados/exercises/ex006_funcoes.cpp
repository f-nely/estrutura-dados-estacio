#include <iostream>

using namespace std;

void soma(float a, int b);

int main()
{
    int a = 10;
    float b = 12.3;

    soma(b, a);

    return 0;
}

void soma(float a, int b)
{
    float result = a + b;

    cout << "A soma de " << a << " com " << b << " é: " << result << endl;
}
