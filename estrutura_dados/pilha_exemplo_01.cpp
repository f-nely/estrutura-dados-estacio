#include <iostream>
#define TAM 2

using namespace std;

void empilhar(int p[], int &t, int v);

int desempilha(int p[], int &t, int &v);

void acessoTopo(int p[], int &t);

void exibirElementos(int p[]);

int main()
{
    int pilha[TAM], topo = -1, val, resp;

    for (int i = 0; i < TAM; i++) {
        cout << "Digite o valor a ser empilhado:\n ";
        cin >> val;
        empilhar(pilha, topo, val);
    }


    /*for (int i = 0; i < TAM; i++) {
        cout << pilha[i] << endl;
    }*/
    exibirElementos(pilha);

    resp = desempilha(pilha, topo, val);
    if (resp == 0) {
        cout << "\nAtenção. Pilha vazia\n";
    } else {
        cout << "\nValor removido: " << val;
    }

    acessoTopo(pilha, topo);

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

void exibirElementos(int p[])
{
    for (int i = 0; i < TAM; i++) {
        cout << p[i] << endl;
    }
}
