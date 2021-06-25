#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string.h>
#define TAM 5

using namespace std;

struct atende
{
    char paciente[TAM][35], identificacao[TAM][20];
    int inicio, fim;
};

void agenda(atende &fil);
void consulta(atende &fil);
void elemPrimeiro(atende &fil);
void lista(atende &fil);

int main()
{
    atende fila;
    // inicialização
    fila.inicio = 0;
    fila.fim = -1;
    char resp[10];
    int op;

    do {
        system("clear");
        cout << "\nFILA (FIFO - FIRST IN - FIRST ON)\n\n";
        cout << "\n1 - Inserir paciente";
        cout << "\n2 - Atender paciente";
        cout << "\n3 - Exibe nome do primeiro paciente a ser atendido";
        cout << "\n4 - Listar - QUESTAO DIDATICA";
        cout << "\n5 - Sair";
        cout << "\nOpção: ";
        cin >> resp;
        op = atoi(resp);

        system("clear");

        switch(op) {
            case 1:
                agenda(fila);
                break;
            case 2:
                consulta(fila);
                break;
            case 3:
                elemPrimeiro(fila);
                break;
            case 4:
                lista(fila);
                break;
            case 5:
                cout << "\nPrograma finalizado com sucesso!\n";
                break;
            default:
                cout << "\nOpção inválida!\n";
                break;
        }
        cout << "\n\n";
    } while (op != 5);

    return 0;
}

void agenda(atende &fil)
{
    char n[35], id[20];
    if(fil.fim == TAM-1) {
        cout << "\nAtenção. Fila cheia!\n";
    } else {
        cin.get();
        cout << "\nEntre com nome: ";
        cin.getline(n, 35);
        //strupr(n);
        cout << "\nEntre com a identificação: ";
        cin.getline(id, 20);
        //strupr(id);
        fil.fim++;
        strcpy(fil.paciente[fil.fim], n);
        strcpy(fil.identificacao[fil.fim], id);
    }
}

void consulta(atende &fil)
{
    if (fil.inicio > fil.fim) {
        cout << "\nAtenção. Fila vazia!";
    } else {
        cout << "\nPaciente atendido: " << fil.paciente[fil.inicio];
        cout << "\nIdentificação: " << fil.identificacao[fil.inicio];
        fil.inicio++;
    }
}

void elemPrimeiro(atende &fil)
{
    if (fil.inicio > fil.fim) {
        cout << "\nAtenção. Fila vazia!";
    } else {
        cout << "\nPróximo paciente a ser atendido: ";
        cout << fil.paciente[fil.inicio];
    }
}

void lista(atende &fil)
{
    int ordem = 1;
    if (fil.inicio > fil.fim) {
        cout << "\nAtenção. Fila vazia!";
    } else {
        cout << "\nOrdem de atendimento\n";
        for (int x = fil.inicio; x <= fil.fim; x++) {
            cout << "\n\n" << ordem++ << "o paciente";
            cout << "\nNome do paciente: " << fil.paciente[x];
            cout << "\nIdentificação: " << fil.identificacao[x];
        }
    }
}
