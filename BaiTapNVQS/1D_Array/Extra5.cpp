// In ra các phần tử chẵn và nhỏ hơn 20
#include <iostream>
#define MAX 100
using namespace std;

bool is_enven_and_smaller_than_20_only(int n)
{
    if (n % 2 == 0 && n < 20)
        return true;
    else
        return false;
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

void enven_and_smaller_than_20_only(int array[MAX], int size, int result_array[MAX], int &result_size)
{
    result_size = 0;
    for (int i = 0; i < size; i++)
    {
        if (is_enven_and_smaller_than_20_only(array[i]))
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
    enven_and_smaller_than_20_only(array, size, result_array, result_size);
    display_output(result_array, result_size);
    return 0;
}