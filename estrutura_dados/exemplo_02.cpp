#include <iostream>

using namespace std;

void menu();

int main()
{
    int option;

    cout << "Escolha a opção desejada?";
    menu();
    cin >> option;

    switch (option) {
        case 1:
            cout << "Vamos estudar Pilha\n";
            break;
        case 2:
            cout << "Vamos estudar Fila\n";
            break;
        case 3:
            cout << "Vamos estudar Lista\n";
            break;
        case 4:
            cout << "Vamos estudar Arvore\n";
            break;
        case 5:
            cout << "Vamos estudar Grafo\n";
            break;
        case 6:
            cout << "Sair\n";
            break;
        default:
            cout << "Opção inválida\n";
            break;
    }

    return 0;
}

void menu()
{
    cout<<"\nMenu\n";

    cout<<"\n1-Pilha";

    cout<<"\n2-Fila";

    cout<<"\n3-Lista";

    cout<<"\n4-Arvore";

    cout<<"\n5-Grafo";

    cout<<"\n6-Sair";

    cout<<"\nOpcao:\n ";
}
