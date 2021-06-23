#include <iostream>
#include <string.h>

using namespace std;

struct Professor
{
    int matricula;
    char titulo[30];
};

int main()
{
    Professor L[2];
    L[0].matricula = 2021;
    strcpy(L[0].titulo, "Algebra");
    L[1].matricula = 2020;
    strcpy(L[1].titulo, "Calculo");

    for (int i = 0; i < 2; i++) {
        cout << L[i].matricula << " " << L[i].titulo << endl;
    }

    return 0;
}
