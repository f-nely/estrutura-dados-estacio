#include <iostream>

using namespace std;

int func1(int vtx[], int tam);

int main()
{
    int vt[5] = {10 , 20, 30, 40, 50};

    cout << func1(vt, 5) << endl;

    return 0;
}

int func1(int vtx[], int tam)
{
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        if (i % 2 != 0)
            soma += vtx[i];
    }

    return soma;
}

