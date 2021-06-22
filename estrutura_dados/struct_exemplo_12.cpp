#include <iostream>
#include <cstdlib>

using namespace std;

struct manipulaNumeros
{
    int contaAlgarismo(long long int num)
    {
        int cont = 0;
        num = abs(num);

        if (num == 0) {
            return 1;
        }

        while (num > 0) {
            cont++;
            num /= 10;
        }
        return cont;
    }

    void quocResto(int a, int b)
    {
        int aux;
        if (a <= 0 || b <= 0) {
            cout << "\nSem resultados\n";
            return;
        }
        if (a < b) {
            aux = a;
            a = b;
            b = aux;
        }
        cout << "\nQuociente: " << a/b << "\nResto: " << a%b;
    }
};

int main()
{
    long long int n;
    int n1, n2;
    manipulaNumeros num;

    cout << "\nDigite um número inteiro: ";
    cin >> n1;
    cout << "\nDigite outro número inteiro: ";
    cin >> n2;

    num.quocResto(n1, n2);
    cout << "\n\n";

    cout << "\nQuantidade de algarismo de " << n1 << " é " << num.contaAlgarismo(n1);
    cout << "\n\n";

    return 0;
}
