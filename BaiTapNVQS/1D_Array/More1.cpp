#include <iostream>
#define MAX 100
using namespace std;

void input(int array[MAX], int &size)
{
    cout << "Enter array's size (5 < size < 100): ";
    cin >> size;
    while (size <= 5 || size >= 100)
    {
        cout << "Please enter again: ";
        cin >> size;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }
}

void display_output(int array[MAX], int size)
{
    cout << "The array entered is: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int array[MAX], size;
    input(array, size);
    display_output(array, size);
    return 0;
}