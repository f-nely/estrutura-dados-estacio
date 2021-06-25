#include <iostream>
#define MAX 2

using namespace std;

struct queue
{
    float circular[MAX];
    int total, inicio, final;
};

void entra(queue &fila);
void lista(queue &fila);

int main()
{
    queue fila;
    fila.inicio = 0;
    fila.total = 0;
    fila.final = 0;

    for (int i = 0; i < MAX; i++) {
        entra(fila);
    }

    lista(fila);

    return 0;
}

void entra(queue &fila)
{
    float valor;
    if (fila.total == MAX) {
        cout << "\nAtenção. Fila cheia\n";
    } else {
        cout << "\nDigite um valor: ";
        cin >> valor;
        fila.circular[fila.final] = valor;
        fila.final++;
        if (fila.final == MAX) {
            fila.final = 0;
            fila.total++;
        }
    }
}

void lista(queue &fila)
{
    if (fila.total == 0) {
        cout << "\nAtenção. Fila vazia!\n";
    } else {
        cout << "\nPróximo a ser removido na posição: " << fila.inicio;
        cout << "\nValor\tPosição\n";
        if (fila.inicio < fila.final) {
            for (int i = fila.inicio; i <= fila.final; i ++) {
                cout << "\n" << fila.circular[i] << "\t" << i << "\n";
            }
        } else {
            for (int i = 0; i < MAX; i++) {
                if (fila.circular[i] != -999)
                    cout << "\n" << fila.circular[i] << "\t" << i << "\n";
            }
        }
    }
}

