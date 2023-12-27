// Tìm số lớn nhất trong mảng
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

void find_smallest_element(int array[MAX], int size, int Largest_element)
{
    Largest_element = array[0];
    for (int i = 0; i < size; i++)
    {
        if (Largest_element <= array[i])
            Largest_element = array[i];
    }
    cout << "The largest element is: " << Largest_element;
}

int main()
{
    int array[MAX], size, Largest_element;
    input(array, size);
    find_smallest_element(array, size, Largest_element);
    return 0;
}
