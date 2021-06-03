#include <iostream>

using namespace std;

void troca(int &num1, int &num2);

int main()
{
    int num1, num2;
    cout << "\nDigite o primeiro número: ";
    cin >> num1;
    cout << "\nDigite o segundo número: ";
    cin >> num2;
    troca(num1, num2);
    cout << "\nApós a troca: " << num1 << "\t" << num2 << endl;

    return EXIT_SUCCESS;
}

void troca(int &num1, int &num2){
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
}
