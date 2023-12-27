// Tìm giá trị nhỏ nhất/lớn nhất của mảng
#include <iostream>
#define MAX 100
using namespace std;

void input(int array[][MAX], int &row, int &col)
{
    cout << "Enter array row and col: ";
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element " << i + 1 << "," << j + 1 << ": ";
            cin >> array[i][j];
        }
    }
}

void find_smallest_element(int array[][MAX], int row, int col, int smallest_element)
{
    smallest_element = array[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (smallest_element >= array[i][j])
                smallest_element = array[i][j];
        }
    }
    cout << "The smallest element is: " << smallest_element;
}

int main()
{
    int array[MAX][MAX], row, col, smallest_element;
    input(array, row, col);
    find_smallest_element(array, row, col, smallest_element);
    return 0;
}