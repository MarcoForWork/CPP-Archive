// Tìm số dương nhỏ nhất / lớn nhất trong mảng
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

void find_smallest__positive_element(int array[MAX], int size, int smallest_positive_element)
{
    smallest_positive_element = array[0];
    for (int i = 0; i < size; i++)
    {
        if (smallest_positive_element >= array[i])
            smallest_positive_element = array[i];
    }
    cout << "The smallest positive element is: " << smallest_positive_element;
}

void find_largest__positive_element(int array[MAX], int size, int largest_positive_element)
{
    largest_positive_element = array[0];
    for (int i = 0; i < size; i++)
    {
        if (largest_positive_element <= array[i])
            largest_positive_element = array[i];
    }
    cout << "The largest positive element is: " << largest_positive_element;
}

int main()
{
    int array[MAX], size, smallest_positive_element, largest_positive_element;
    input(array, size);
    find_smallest__positive_element(array, size, smallest_positive_element);
    cout << "\n";
    find_largest__positive_element(array, size, largest_positive_element);
    return 0;
}
