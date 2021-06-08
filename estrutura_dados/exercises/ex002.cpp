#include <iostream>

using namespace std;

void troca(int &x, int &y);

int main()
{
    int a = 13, b = 10;
    cout << "\nAntes da troca: " << endl;
    cout << "a: " << a << " b: " << b << endl;
    troca(a, b);
    cout << "\nDepois da troca: " << endl;
    cout << "a: " << a << " b: " << b << endl;
    return 0;
}

void troca(int &x, int &y)
{
    int tmp;
    tmp = y; //tmp = 10
    y = x; // y = 13
    x = tmp; // x = 10
}
