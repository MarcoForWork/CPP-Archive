// Tìm vị trí của phần tử có giá trị âm lớn nhất trong mảng số nguyên
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

void position_has_the_largest_negative_element(int array[MAX], int size, int position[MAX], int position_size)
{
    position_size = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            for (int j = i; j < size - 1; j++)
            {
                array[j] = array[j + 1];
            }
            size--;
            i--;
        }
    }
    int largest_negative_element = array[0];
    for (int i = 0; i < size; i++)
    {
        if (largest_negative_element <= array[i])
        {
            largest_negative_element = array[i];
            position[position_size++] = i + 1;
        }
    }
    if (largest_negative_element >= 0)
    {
        cout << "Array doesn't have any negative element";
    }
    else
    {
        cout << "Position has the largest negative element is: ";
        for (int i = 0; i < position_size; i++)
        {
            cout << position[i] << " ";
        }
    }
}

int main()
{
    int array[MAX], size, position[MAX], position_size;
    input(array, size);
    position_has_the_largest_negative_element(array, size, position, position_size);
    return 0;
}