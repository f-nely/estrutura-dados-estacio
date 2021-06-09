#include <iostream>

using namespace std;

int func (int a, int &b);

int main()
{
    int x = 2, y = 3, z;
    z = func(x, y);
    cout << x << " ; " << y << " ; " << z;
    return 0;
}

int func (int a, int &b)
{
    a = b - a; // 1
    b = a * 2; // 2
    a = b * 2;

    return a;
}

