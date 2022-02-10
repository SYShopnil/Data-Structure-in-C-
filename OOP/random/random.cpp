#include <iostream>
using namespace std;
int b;
struct Student
{

    string name;
    int age;
    float grade[5];

    Student(string inputName, int inputAge)
    {
        name = inputName;
        age = inputAge;
    }
    Student()
    {
        name = "bye";
        age = 25;
    }
    Student takeAge(int a)
    {
        age = a;
        return *this;
    }
};

int &add(int a)
{
    b = a;
    return b;
}

int main()
{
    Student shopnil("shopnil", 25), Rifat;
    Rifat = shopnil.takeAge(5).takeAge(55);
    cout << Rifat.age << endl;
    cout << shopnil.age;
}