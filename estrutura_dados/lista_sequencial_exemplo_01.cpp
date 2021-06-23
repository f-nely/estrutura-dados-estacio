#include <iostream>

using namespace std;

void insere(int codigo[], int &t, int tamanho);

void exibe(int codigo[], int t);

void exibeElemento(int codigo[], int t);

void systemClear();

int main()
{
    int codigoProduto[3], op, tam;
    tam = 0;

    do {
        systemClear();

        cout << "\nMenu - Lista\n";
        cout << "\n0 - Reiniciar a Lista";
        cout << "\n1 - Inserir Código Na Lista";
        cout << "\n2 - Exibir Lista";
        cout << "\n3 - Exibe Tamanho Da Lista";
        cout << "\n4 - Exibe Um Elemento Da Lista";
        cout << "\n5 - Sair";
        cout << "\nOpção: ";
        cin >> op;

        systemClear();

        switch(op) {
            case 0:
                tam = 0;
                break;
            case 1:
                insere(codigoProduto, tam, 3);
                break;
            case 2:
                exibe(codigoProduto, tam);
                break;
            case 3:
                cout << "\nTamanho da Lista: " << tam;
                break;
            case 4:
                exibeElemento(codigoProduto, tam);
                break;
            case 5:
                cout << "\nFinalizando o programa da Lista\n";
                break;
            default:
                cout << "\nOpção Inválida\n";
                break;
        }
        cout << "\n\n";

    } while(op != 3);

    return 0;
}

void insere(int codigo[], int &t, int tamanho)
{
    int prod;

    if (tamanho == t) {
        cout << "\nAtenção! Lista cheia\n";
    } else {
        cout << "\nDigite código do produto a ser inserido: ";
        cin >> prod;
        codigo[t] = prod;
        t++;
    }
}

void exibe(int codigo[], int t)
{
    int i;

    if (t == 0) {
        cout << "\nAtenção! Lista cheia\n";
    } else {
        cout << "\nRelação dos códigos\n";
        for (i = 0; i < t; i++) {
            cout << "\n" << codigo[i];
        }
    }
}

void exibeElemento(int codigo[], int t)
{
    int prod, posicao;

    if (t == 0)
        cout << "\nAtenção! Lista vazia\n";
    else {
        cout << "\nQual a posição que deseja?";
        cin >> posicao;
        posicao--;
        if (posicao >= t)
            cout << "\nAtenção! Nenhum código armazenado ou posição inexistente\n";
        else
            cout << "\nCódigo: " << codigo[posicao] << "\n";
    }
}

void systemClear()
{
    system("clear");
}
