#include <iostream>
#define TAM 5

using namespace std;

void empilhar(int p[], int &t, int v);

int desempilha(int p[], int &t, int &v);

void acessoTopo(int p[], int &t);

void situacaoPilha(int p[], int &t);

int main()
{
    int op, val, topo = -1, pilha[TAM], resp;

    do {
        system("clear");
        cout << "\nPilha (LIFO - Last In First Out)\n\n";
        cout << "\n1 - Inserir um valor na pilha: ";
        cout << "\n2 - Remover um valor na pilha: ";
        cout << "\n3 - Mostrar o elemento do topo da pilha: ";
        cout << "\n4 - Mostrar situação da pilha: ";
        cout << "\n5 - Exibe elementos da pilha: ";
        cout << "\n6 - Sair";
        cout << "\nOpção: ";
        cin >> op;
        system("clear");

        switch(op) {

            case 1:
                cout << "Digite o valor a ser empilhado: ";
                cin >> val;
                empilhar(pilha, topo, val);
                break;

            case 2:
                resp = desempilha(pilha, topo, val);
                break;
            case 3:
                acessoTopo(pilha, topo);
                break;
            case 4:
                situacaoPilha(pilha, topo);
                break;
            case 5:
                cout << "\nPrograma finalizado!";
                break;
            default:
                cout << "\nOpção inválida\n";
                break;
        }
        cout << "\n\n";
    } while(op != 6);


    return 0;
}

void empilhar(int p[], int &t, int v)
{
    if (t == TAM-1) {
        cout << "\nAtenção. Pilha cheia\n";
    } else {
        t++;
        p[t] = v;
    }
}

int desempilha(int p[], int &t, int &v)
{
    if (t == -1) {
        return 0;
    } else {
        v = p[t];
        t--;
        return 1;
    }
}

void acessoTopo(int p[], int &t)
{
    if (t == -1)
        cout << "\nAtenção. Pilha vazia\n";
    else
        cout << "\nElemento do topo da pilha: " << p[t] << "\n";
}

void situacaoPilha(int p[], int &t)
{
    if (t == -1)
        cout << "\nAtenção. Pilha vazia\n";
    else if (t == TAM-1)
        cout << "\nAtenção. Pilha cheia\n";
        else
        cout << "\nTotal de elementos na pilha: " << t+1 << "\n";
        cout << "\nEspaço disponível na pilha: " << TAM-(t+1) << "\n";
}

