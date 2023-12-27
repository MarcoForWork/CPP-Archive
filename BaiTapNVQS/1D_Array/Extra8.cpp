// Tìm số nhỏ nhất trong mảng
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

void find_smallest_element(int array[MAX], int size, int smallest_element)
{
    smallest_element = array[0];
    for (int i = 0; i < size; i++)
    {
        if (smallest_element >= array[i])
            smallest_element = array[i];
    }
    cout << "The smallest element is: " << smallest_element;
}

int main()
{
    int array[MAX], size, smallest_element;
    input(array, size);
    find_smallest_element(array, size, smallest_element);
    return 0;
}
