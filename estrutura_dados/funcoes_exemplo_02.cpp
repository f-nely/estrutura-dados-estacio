#include <iostream>

using namespace std;

float percentual(float total, float percent);

int main()
{
    cout << percentual(840, 30);

    return 0;
}

float percentual(float total, float percent)
{
    return total * percent / 100;
}
