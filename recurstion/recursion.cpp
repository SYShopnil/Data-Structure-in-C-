#include <iostream>
using namespace std;

int fac(int value)
{
    if (value <= 1)
    {
        return 1;
    }
    return value * fac(value - 1);
}

int fibonic(int value)
{
    if (value == 1 || value == 2)
    {
        return 1;
    }
    int sum = fibonic(value - 2) + fibonic(value - 1);
    cout << sum << " ";
    return sum;
}

int main()
{
    // cout << fac(5);
    cout << fibonic(7);
}