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
    int n = 3;
    Professor L[n];

    L[0].matricula = 101;
    strcpy(L[0].titulo, "M");
    L[1].matricula = 102;
    strcpy(L[1].titulo, "D");
    L[2].matricula = 103;
    strcpy(L[2].titulo, "PD");

    for (int i = 0; i < n; i++) {
        cout << L[i].matricula << " " << L[i].titulo << endl;
    }

    return 0;
}
