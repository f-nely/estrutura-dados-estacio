#include <iostream>

using namespace std;

int deciframe(int v[], int tam, int e);

int main()
{
    int v[10] = {0, 2, 4, 6, 8, 10, 20, 100};
    int tam = 8, e = -6;

    cout << deciframe(v, tam, e);
    cout << "\n";

    return 0;
}
int deciframe(int v[], int tam, int e)
{
    int i = 0, f = tam-1, m;
    while(i <= f) {
        m = (i+f) / 2;
        if (v[m] == e) {
            return m;
        } else {
            i = m + 1;
        }
    }
    return -1;
}
