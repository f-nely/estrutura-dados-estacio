#include <iostream>

using namespace std;

void linha(char c, int n);

int main()
{
    linha('b', 2);

    return 0;
}

void linha(char c, int n)
{
    for (int i = 1; i <= n; i++) {
        cout << c << endl;
    }
}
