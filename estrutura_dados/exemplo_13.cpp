#include  <iostream>

using namespace std;

int main()
{
    float vet[] = {67.25, 54.50};
    float aux;

    cout << "\nAntes da comparação\n";
    cout << "\n" << vet[0] << "\t" << vet[1];

    if (vet[0] > vet[1]) {
        aux = vet[0];
        vet[0] = vet[1];
        vet[1] = aux;
    }

    cout << "\n\nApós a comparação\n";
    cout << "\n" << vet[0] << "\t" << vet[1];
    cout << "\n\n";

    return 0;
}
