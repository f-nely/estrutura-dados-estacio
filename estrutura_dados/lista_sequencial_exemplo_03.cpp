#include <iostream>

using namespace std;

void insere(int idades[], int id, int &t, int tamanho);

void exibe(int idades[], int t);

void selecao(int idades[], int t);

void frequencias(int idades[], int t);

int main()
{
    int tam, op, f3=0, idades[10], id;
    tam = 0;

    do {
        system("clear");
        cout<<"\nMenu 2 - LISTA \n";
        cout<<"\n0- Reinicar a LISTA";
        cout<<"\n1- Inserir idade na lista";
        cout<<"\n2- Exibir lista";
        cout<<"\n3- Ordenar lista";
        cout<<"\n4- Exibe frequencia";
        cout<<"\n5- Sair";
        cout<<"\nOpcao: ";
        cin>>op;

        system("clear");

        switch(op) {

            case 0:
                tam = 0;
                break;
            case 1:
                cout << "\nDigite idade(10-19) a ser inserida na Lista: ";
                cin >> id;
                while (id < 10 || id > 19) {
                    cout<<"\nAtencao para o intervalo.";
                    cout<<"Digite idade(10-19) a ser inserida na Lista: ";
                    cin >> id;
                }
                insere(idades, id, tam, 3);
                break;
            case 2:
                exibe(idades, tam);
                break;
            case 3:
                selecao(idades, tam);
                f3=1;
                break;
            case 4:
                if (f3 == 1)
                frequencias(idades, tam);
                else
                cout<<"\nOrdene primeiro o vetor\n";
                break;
            case 5:
                cout<<"\nFinalizando o programa da LISTA\n";
                break;
            default:
                cout<<"\nOpcao invalida\n";
                break;
        }
        cout << "\n\n";

    } while (op != 2);
    /*int idades[1], id, tam;
    tam = 0;
    cout << "\nDigite idade (10-19) a ser inserida na Lista: ";
    cin >> id;

    while (id < 10 || id > 19) {
        cout << "\nAtenção para o intervalo." << endl;
        cout << "\nDigite idade (10-19) a ser inserida na Lista: ";
        cin >> id;
    }

    insere(idades, id, tam, 1);

    cout << "\n";

    exibe(idades, tam);

    cout << "\n";

    if (tam == 0) {
        cout << "\nAtenção! Lista vazia\n";
    } else {
        selecao(idades, tam);
    }

    for (int i = 0; i < tam; i++) {
        cout << idades[i] << endl;
    }*/

    return 0;
}

void insere(int idades[], int id, int &t, int tamanho)
{
    if (tamanho == t) {
        cout << "\nAtenção! Lista cheia\n";
    } else {
        idades[t] = id;
        t++;
    }
}

void exibe(int idades[], int t)
{
    int x;

    if (t == 0) {
        cout << "\nAtenção! Lista vazia\n";
    } else {
        cout << "\nRelação das idades\n";
        for (x = 0; x < t; x++) {
            cout << "\n" << idades[x];
        }
    }
}

void selecao(int idades[], int t)
{
    int i, j, menor, temp;

    if (t == 0) {
        cout << "\nAtenção! Lista vazia\n";
    } else {
        for (i = 0; i < t-1; i++) {
            menor = i;
            for (j = i+1; j < t; j++) {
                if (idades[j] < idades[menor]) {
                    menor = j;
                    temp = idades[i];
                    idades[i] = idades[menor];
                    idades[menor] = temp;
                }
            }
            cout << "\nLista Ordenada\n";
        }
    }
}

void frequencias(int idades[], int t)
{
    int i, c, frequencia[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    if (t == 0) {
        cout << "\nAtenção! Lista vazia\n";
    } else {
        for (i = 0; i < t; i++) {
            frequencia[idades[i]-10]++;
            cout << "\n" << idades[i] << "\t" << frequencia[idades[i]-10];
        }
        cout<<"\n\nIdade\tFrequencia\n";

        cout<<"\n"<<idades[0]<<"\t"<< frequencia[idades[0]-10];

        for(i=1; i<t; i++)

        if (idades[i] != idades[i-1])

        cout<<"\n"<<idades[i]<<"\t"<< frequencia[idades[i]-10];
    }
}
