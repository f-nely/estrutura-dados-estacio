#include <iostream>
#include <string>

using namespace std;

struct Aluno
{
    string nome;
    float nota;
};

int main()
{
    Aluno vet[100];
    vet[10].nota = 5.7;

    cout << "Nota " << vet[10].nota << endl;

    return 0;
}
