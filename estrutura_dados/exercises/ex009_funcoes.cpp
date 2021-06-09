#include <iostream>

using namespace std;

void dobro(int x);

int main()
{
    int n = 5;

    dobro(5);

    cout << n << endl;

    return 0;
}

void dobro(int x)
{
    x = 2 * x;
}
