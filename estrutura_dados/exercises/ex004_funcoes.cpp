#include <iostream>
#include <cmath>

using namespace std;

int a, b;

void dobro(int x);

int triplo(int y);

void altera(int x, int &y);

int main()
{
    a = 2;
    b = 3;

    dobro(a); // x = 4, x = 2
    b = triplo(b); // y = 9
    altera(a, b);
    cout << a << " e " << b << endl;

    return 0;
}

void dobro(int x)
{
    x = 2 * x;
}

int triplo(int y)
{
    return 3 * y;
}

void altera(int x, int &y)
{
    x = x + a;
    y = x + b;
}

