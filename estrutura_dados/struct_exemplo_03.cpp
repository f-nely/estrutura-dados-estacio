#include <iostream>

using namespace std;

struct Data
{
    int dia, mes, ano;
};

int main()
{
    Data date;

    date.dia = 21;
    date.mes = 06;
    date.ano = 2021;

    cout << date.dia << " / 0" << date.mes << " / " << date.ano << endl;

    return 0;
}

