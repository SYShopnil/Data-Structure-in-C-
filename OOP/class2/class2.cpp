#include <iostream>
using namespace std;

// int Sum(int a, int b); //pass by value
int Sum(int &a, int &b); //pass by ref
// int Sum(int &a, int &b); //pass by address
int sum;
// int &Sum(); //return by value
// int &Sum(int a, int b);

int main()
{
    int a = 25;
    int b = 50;
    int *c = &a;
    int *d = &b;
    int res = Sum(a, b); //pass by reference and value both
    // int res = Sum(5, 5); //pass by literal will work when it is pass by value but in pass by ref it did not work
    // int res = Sum(*c, *d); //function call and pass pointer

    //return value
    // int res = Sum(); //function call and pass pointer
    // int res = Sum(a, b); //function call and pass pointer

    cout << "parent a = " << a << endl;
    cout << "parent b = " << b << endl;
    cout << "sum = " << res << endl;
}

//pass by value
//pass by ref
//pass by address i mean by pointer

// int Sum(int a, int b)
// {
//     a = 50;
//     b = 50;
//     return a + b;
// } //function definition of pass by value

int Sum(int &a, int &b)
{
    a = 50;
    b = 50;
    return a + b;
} //function definition of pass by reference

// int Sum(int &a, int &b)
// {
//     a = 50;
//     b = 50;
//     return a + b;
// } //function definition of pass by address

//function return
// return by value
//return by ref
//return by void

// int Sum(int a, int b)
// {
//     a = 50;
//     b = 50;
//     return a + b;
// } //function return of  by value

// int &Sum()
// {
//     int j = 50;
//     int d = 50;
//     sum = j + d;
//     return sum;
// } //function return of  by ref without pass parameters work with global variables
