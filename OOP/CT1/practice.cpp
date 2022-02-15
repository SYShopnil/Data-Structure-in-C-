#include <iostream>
using namespace std;

int limit = 5;
void Hello(int *a)
{
    // for (int i = 0; i < limit; i++)
    // {
    //     cout << a[i] << endl;
    //     cout << *(a + 1) << endl;
    // }
    *a = 155;
}
int main()
{
    // int a[5];
    // for (int i = 0; i < limit; i++)
    // {
    //     cin >> a[i];
    // }
    int b = 50;
    int *c = &b;
    Hello(c);
    cout << *c;
}