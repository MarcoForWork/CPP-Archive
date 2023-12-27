// In ra phần tử âm của mảng
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

void negative_element_only(int array[MAX], int size, int result_array[MAX], int &result_size)
{
    result_size = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0)
        {
            result_array[result_size++] = array[i];
        }
    }
}

void display_output(int result_array[MAX], int result_size)
{
    cout << "The result array is: ";
    for (int i = 0; i < result_size; i++)
    {
        cout << result_array[i] << " ";
    }
}

int main()
{
    int array[MAX], size, result_array[MAX], result_size;
    input(array, size);
    negative_element_only(array, size, result_array, result_size);
    display_output(result_array, result_size);
    return 0;
}
