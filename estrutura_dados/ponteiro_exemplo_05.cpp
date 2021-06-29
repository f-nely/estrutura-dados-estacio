#include <iostream>

using namespace std;

int main()
{
    int a, *pa;
    a = 15;
    pa = &a;

    cout << "\n------------------\n";
    cout<<pa<<"\n";
    cout<<&a<<"\n";

    int ano, *ptrAno;
    ano = 1989;
    ptrAno = &ano;

    cout << "\n------------------\n";
    cout << ano << "\n";
    cout << &ano << "\n";
    cout << ptrAno << "\n";
    cout << &ptrAno << "\n";
    cout << *ptrAno << "\n";

    return 0;
}
