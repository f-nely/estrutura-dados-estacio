#include <iostream>

using namespace std;

int contaMaioresQueH(double alts[], int tam, double altP);

int main()
{
    double alturas[4], procuraAltura;
    for (int x = 0; x < 4; x++) {
        cout << "\nAltura " << x + 1 << ": ";
        cin >> alturas[x];
    }
    cout << "\n\nQual a altura minima? ";
    cin >> procuraAltura;
    cout << "\nRelação das alturas\n";
    for (int x = 0; x < 4; x++)
        cout << alturas[x] << "\t";
    contaMaioresQueH(alturas, 4, procuraAltura);
    cout << "\n\nToral das alturas maiores do que 8: " << contaMaioresQueH(alturas, 4, procuraAltura);
    cout << "\n\n";

    return 0;
}

int contaMaioresQueH(double alts[], int tam, double altP)
{
    int conta = 0;

    for (int x = 0; x < tam; x++)
        if (alts[x] >= altP);
        conta ++;

    return conta;
}
