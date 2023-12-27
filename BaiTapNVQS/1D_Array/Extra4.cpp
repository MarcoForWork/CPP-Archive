// In ra các phần tử có giá trị lẻ của mảng
#include <iostream>
#define MAX 100
using namespace std;

bool is_odd(int n)
{
    if (n % 2 == 0)
        return false;
    else
        return true;
}

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

void odd_element_only(int array[MAX], int size, int result_array[MAX], int &result_size)
{
    result_size = 0;
    for (int i = 0; i < size; i++)
    {
        if (is_odd(array[i]))
        {
            result_array[result_size++] = array[i];
        }
    }
}

void display_output(int result_array[MAX], int result_size)
{
    cout << "Result array is: ";
    for (int i = 0; i < result_size; i++)
    {
        cout << result_array[i] << " ";
    }
}

int main()
{
    int array[MAX], size, result_array[MAX], result_size;
    input(array, size);
    odd_element_only(array, size, result_array, result_size);
    display_output(result_array, result_size);
    return 0;
}