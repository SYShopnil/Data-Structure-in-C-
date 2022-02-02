#include <iostream>
using namespace std;

struct Math
{
private:
    double value;
    void setValue(double val)
    {
        value = val;
    }
    void add(int addItems)
    {
        double sum = value;
        sum += addItems;
        setValue(sum);
    }
    Math getThis()
    {
        return *this;
    }

public:
    Math add(int *addItems)
    {
        double sum = value;
        for (int i = 0; i < 5; i++)
        {
            sum += addItems[i];
        }
        setValue(sum);
        return *this;
    }
    Math division(int divisionItem)
    {
        setValue(value / divisionItem);
        return *this;
    }
    void getValue()
    {
        cout << "Current Value = " << value;
    }
    Math MakeClone()
    {
        Math clone;
        clone.value = value;
        return clone;
    }
    void operator+(double a)
    {
        add(a);
    }
};
int main()
{
    Math first, second, third, fourth;
    int valueOne[5] = {1, 2, 3, 4, 5};
    first.add(valueOne).getValue();
}