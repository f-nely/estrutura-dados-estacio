#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cctype>

using namespace std;

struct cad
{
    char nome[31];
    int idade;
};

void maiuscula(char func[]);

cad entrada();

void exibe(cad func);

int main()
{
    cad funcionario;
    funcionario = entrada();
    exibe(funcionario);

    return 0;
}

cad entrada()
{
    cad temp;
    char lixo[100];
    cout << "\nNome do funcionário até 30 caracteres: ";
    cin.getline(lixo, 100);
    while (strlen(lixo) > 30) {

        cout << "\nNome muito extenso\n";
        cout << "\nNome do funcionário até 30 caracteres: ";
        cin.getline(lixo, 100);
    }

    strcpy(temp.nome, lixo);
    maiuscula(temp.nome);
    cout << "\nDigite idade: ";
    cin >> temp.idade;

    return temp;
}

void exibe(cad func)
{
    cout << "\n\n\n" << func.nome << "\t" << func.idade;
    cout << "\n\n";
}

void maiuscula(char func[])
{
    int x;
    for (x = 0; func[x] != '\0'; x++) {
        func[x] = toupper(func[x]);
    }
}

