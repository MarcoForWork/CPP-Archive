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

void display_output(int result_array[MAX], int result_size)
{
    for (int i = 0; i < result_size; i++)
    {
        cout << result_array[i] << " ";
    }
}

void erase_element(int array[MAX], int result_array[MAX], int size, int &result_size)
{
    int position;
    cout << "Enter the element you want to erase: ";
    cin >> position;

    result_size = 0;
    for (int i = 0; i < size; i++)
    {
        if (i != position - 1)
            result_array[result_size++] = array[i];
    }
    result_array[result_size] = (int)nullptr;
}

int main()
{
    int array[MAX], result_array[MAX], size, result_size;
    input(array, size);
    erase_element(array, result_array, size, result_size);
    display_output(result_array, result_size);
    return 0;
}
