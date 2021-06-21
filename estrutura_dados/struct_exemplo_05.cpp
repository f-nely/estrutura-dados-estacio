#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

struct Aluno
{
    char nome[31], disciplina[21];
    long int matricula, telefone, turma;
    float av1, av2, av3, media;
};

int main()
{
    Aluno student;

    student.matricula = 202102003963;
    student.telefone = 999990000;
    student.turma = 4005;
    student.av1 = 8.5;
    student.av2 = 10;
    student.av3 = 9;
    student.media = (student.av1 + student.av2 + student.av3) / 3;

    cout << round(student.media) << endl;

    strcpy(student.nome, "James Holden");
    strcpy(student.disciplina, "Estrutura de Dados");

    cout << student.nome << endl;

    return 0;
}

