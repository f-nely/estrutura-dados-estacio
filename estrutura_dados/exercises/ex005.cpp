#include <iostream>

using namespace std;

void eureka();

int main()
{
    eureka();

    return 0;
}

void eureka()
{
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        } else  {
            if (i % 7 == 0) {
                return;
            }
        }
    }
}
