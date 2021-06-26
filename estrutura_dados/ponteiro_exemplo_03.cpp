#include <iostream>

using namespace std;

int main()
{
    // alocação dinâmica
    int *ptr = new int (1024);

    cout << "\nValor que foi inicializado: " << *ptr << "\n\n";

    return 0;
}
