#include <iostream>

using namespace std;

int executar(int x, int &y);

int main()
{
    int a = 2, b = 2, c = 2;
    c = executar(a, b);
    cout << a << " , " << b << " , " << c;
    return 0;
}

int executar(int x, int &y)
{
    x = y * 2; //x = 2
    y = ++x; // y = 5

    return x + y;
}
