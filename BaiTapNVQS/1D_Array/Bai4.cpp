// Tìm vị trí phần tử lớn nhất trong mảng
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

void position_has_the_largest_element(int array[MAX], int size, int position)
{
    int largest_element = 0;
    position = 0;
    for (int i = 0; i < size; i++)
    {
        if (largest_element < array[i])
        {
            largest_element = array[i];
            position = i;
        }
    }
    cout << "Position has the largest element is: " << position + 1;
}

int main()
{
    int array[MAX], size, position;
    input(array, size);
    position_has_the_largest_element(array, size, position);
    return 0;
}