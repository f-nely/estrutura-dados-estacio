#include <iostream>
#include <cstring>

using namespace std;

struct Cadastro
{
    char nome[30];
    float nota;
};

void exibe(Cadastro *m);

int main()
{
    Cadastro aluno, *p;

    cout << "\nNome do aluno: ";
    cin.getline(aluno.nome, 30);
    cout << "\nNota: ";
    cin >> aluno.nota;

    p = &aluno;
    exibe(p);
    cout << "\n\n";

    return 0;
}

void exibe(Cadastro *m)
{
    int c;
    for (c = 0; c < strlen(m->nome); c++) {
        m->nome[c] = toupper(m->nome[c]);
        cout << "\nDados do aluno\n";
        cout << "\n\nNome : " << m->nome;
        cout << "\n\nNota: " << (*m).nota;
    }
}
