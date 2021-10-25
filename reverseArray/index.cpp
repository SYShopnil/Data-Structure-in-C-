#include <iostream>
using namespace std;

int reverse(int array[], int positionOne, int positionTwo, int size)
{
    int i = positionOne;
    int j = positionTwo;
    int tempo = positionTwo;
    while (i < j)
    {
        tempo = array[i];
        array[i] = array[j];
        array[j] = tempo;
        i++;
        j--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array ";
    cin >> size;
    int mainArray[size];
    for (int i = 0; i < size; i++)
    {
        cin >> mainArray[i];
    }
    cout << "Enter the reverse position one ";
    int positionOne, positionTwo;
    cin >> positionOne;
    cout << endl
         << "Enter the reverse position two ";
    cin >> positionTwo;
    reverse(mainArray, positionOne, positionTwo, size);
}
