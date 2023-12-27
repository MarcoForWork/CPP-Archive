#include <iostream>
#define MAX 100
using namespace std;

void input(int array[MAX], int &size)
{
    cout << "Enter array's size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }
}

void find_x(int array[MAX], int size, int x, int x_position)
{
    cout << "Enter x value: ";
    cin >> x;

    x_position = 0;
    for (int i = 0; i < size; i++)
    {
        if (x == array[i])
        {
            x_position = i + 1;
            break;
        }
    }

    if (x_position != 0)
        cout << "x first position is: " << x_position;
    else
        cerr << "Not found function return -1";
}

int main()
{
    int array[MAX], size, x, x_position;
    input(array, size);
    find_x(array, size, x, x_position);
    return 0;
}