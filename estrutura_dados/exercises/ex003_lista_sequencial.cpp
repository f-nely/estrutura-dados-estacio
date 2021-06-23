#include <iostream>
#include <string.h>

using namespace std;

struct Aluno
{
    int matricula;
    char nome[30];
};

int main()
{
    Aluno L[2];
    L[0].matricula = 2021;
    strcpy(L[0].nome, "James Holden");
    L[1].matricula = 2020;
    strcpy(L[1].nome, "John Snow");

    for (int i = 0; i < 2; i++) {
        cout << L[i].matricula << " " << L[i].nome << endl;
    }

    return 0;
}

