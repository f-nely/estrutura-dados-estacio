#include <iostream>

using namespace std;

struct Dados
{
    int matric;
    float sal;
};

int main()
{
    int x, nfunc;
    cout << "\nQuantos funcionários? ";
    cin >> nfunc;
    Dados *ptr = new Dados[nfunc];

    for (x = 0; x < nfunc; x++) {
        cout << "\nDigite a matrícula do funcionário: ";
        cin >> ptr[x].matric;
        cout << "\nDigite o salário do funcionário: ";
        cin >> ptr[x].sal;
    }

    cout << "\nMatrícula\tSalário\n";
    for (x = 0; x < nfunc; x++) {
        cout << "\n" << (ptr+x)->matric << "\t\t" << (ptr+x)->sal;
    }
    cout << "\n\n";

    return 0;
}
