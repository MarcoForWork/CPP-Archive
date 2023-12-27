// Vị trí cuối cùng của phần tử x trong mảng
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

void find_x(int array[MAX], int size, int x, int &x_position)
{
    cout << "Enter x: ";
    cin >> x;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == x)
            x_position = i;
    }
    cout << "The last postion of x is: " << x_position + 1;
}

int main()
{
    int array[MAX], size, x, x_position;
    input(array, size);
    find_x(array, size, x, x_position);
    return 0;
}