#include <iostream>
#include <string.h>

using namespace std;

void msgRecebe(char msg[]);

int main()
{
    msgRecebe("Hey You");

    return 0;
}

void msgRecebe(char msg[])
{
    int tam = strlen(msg);

    cout << msg << " tem " << tam << " caracteres\n";
}
