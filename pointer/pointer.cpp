#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    cout << **d << endl;
    cout << "a =  " << &a;
}