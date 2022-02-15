#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    Student()
    {
        name = "Untitled";
        age = 25;
    }
    void setName(string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};

istream &operator>>(istream &input, Student &data)
{
    string name;
    int age;
    input >> name;
    input >> age;
    data.setName(name);
    data.setAge(age);
    return input;
}

ostream &operator<<(ostream &out, Student data)
{
    cout << "Info of" << data.getName() << ":" << endl;
    cout << "Name: " << data.getName() << endl;
    cout << "Age: " << data.getAge() << endl;
    return out;
}

int main()
{
    Student shopnil, asif;
    cin >> shopnil >> asif;
    // operator>>(operator>>(cin, shopnil), asif);
    cout << shopnil << asif;
}
