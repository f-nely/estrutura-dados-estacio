#include <iostream>

using namespace std;

void func(int a, int &b);

int main()
{
    int x = 2, y = 3;
    func(x, y);
    func(y, x);
    cout << x << " ; " << y << endl;
    return 0;
}

void func(int a, int &b)
{
    a++;
    b = a * 2;
}
