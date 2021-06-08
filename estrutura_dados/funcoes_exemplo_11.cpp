#include <iostream>
#include <cmath>

using namespace std;

void arredonda(double notas[], int tam);

int main()
{
    double notas[5];
    for (int i = 0; i < 5; i++) {
        cout << "\nNota " << i + 1 << ": ";
        cin >> notas[i];
    }
    cout << "\nRelação das notas originais\n";
    for (int i = 0; i < 5; i++) {
        cout << notas[i] << "\t";
        arredonda(notas, 5);
    }
    cout << "\nRelação das notas arredondadas para cima\n";
    for (int i = 0; i < 5; i++) {
        cout << notas[i] << "\t";
    }
    cout << "\n\n";
    return 0;
}

void arredonda(double notas[], int tam)
{
    for (int i = 0; i < tam; i++) {
        notas[i] = ceil(notas[i]);
    }
}
