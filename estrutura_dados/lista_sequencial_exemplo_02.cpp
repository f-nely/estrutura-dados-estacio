#include <iostream>

using namespace std;

void insere(int matricula[], int m, int &t, int tamanho);

void exibe(int matricula[], int t);

int buscaSequencial(int matricula[], int m, int t);

void remover(int matricula[], int m, int &t);

int main()
{
    int matricula[2], mat, tam, posicao, op;
    tam = 0;

    do {
        //system("clear");
        cout << "\nMenu - Lista\n";
        cout << "\n0 - Reiniciar a Lista";
        cout << "\n1 - Inserir Matrícula Na Lista";
        cout << "\n2 - Exibir Lista";
        cout << "\n3 - Procura Matrícula na Lista";
        cout << "\n4 - Remover Matrícula na Lista";
        cout << "\n5 - Sair";
        cout << "\nOpção: ";
        cin >> op;

        system("clear");

        switch(op) {
            case 0:
                tam = 0;
                break;
            case 1:
                cout << "\nDigite a matrícula a ser inserida: ";
                cin >> mat;
                insere(matricula, mat, tam, 2);
                break;
            case 2:
                exibe(matricula, tam);
                break;
            case 3:
                cout << "\nQual matrícula a ser procurada?";
                cin >> mat;
                posicao = buscaSequencial(matricula, mat, tam);
                if (posicao == -1) {
                cout << "\nAtenção! Lista vazia\n";
                } else if (posicao == 2) {
                    cout << "\nAtenção! Matrícula não encontrada\n";
                } else {
                    cout << "\nMatrícula encontrada na posição: " << posicao+1 << "\n";
                }
                break;
            case 4:
                cout << "\nQual matrícula a ser removida?";
                cin >> mat;
                remover(matricula, mat, tam);
                break;
            case 5:
                cout << "\nFinalizando o programa da Lista\n";
                break;
            default:
                cout << "\nOpção Inválida\n";
                break;
        }
        cout << "\n\n";
    } while(op != 2);

    return 0;
}

void insere(int matricula[], int m, int &t, int tamanho)
{
    if (tamanho == t) {
        cout << "\nAtenção! Lista cheia\n";
    } else {
        matricula[t] = m;
        t++;
    }
}

void exibe(int matricula[], int t)
{
    int x;

    if (t == 0)
        cout << "\nAtenção! Lista vazia\n";
    else
        cout << "\nRelação das Matrículas\n";
        for (x = 0; x < t; x++) {
            cout << "\n" << matricula[x];
        }
}

int buscaSequencial(int matricula[], int m, int t)
{
    int x;

    if (t == 0) {
        return -1; // testa se a lista está vazia
    }
    for (x = 0; x < t; x++) {
        return x;
    }
    return -2;
}

void remover(int matricula[], int m, int &t)
{
    int pos, x;

    pos = buscaSequencial(matricula, m, t);
    if (pos == -1) {
        cout << "\nAtenção! Lista vazia\n";
    } else if (pos == -2) {
        cout << "\nAtenção! Matrícula não encontrada\n";
    } else {
        for (x = pos; x < t-1; x++) {
            matricula[x] = matricula[x+1];
            t--;
            cout << "\nMatrícula Removida\n";
        }
    }
}
