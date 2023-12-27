// Tìm kiếm một phần tử trong mảng
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

void find_element(int array[][MAX], int row, int col, int element, int element_row, int element_col)
{
    element = 0;
    cout << "Enter row and col of the element: ";
    cin >> element_row >> element_col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == element_row - 1 && j == element_col - 1)
                element = array[i][j];
        }
    }
    cout << "The value of the element is: " << element;
}

int main()
{
    int array[MAX][MAX], row, col, element, element_row, element_col;
    input(array, row, col);
    find_element(array, row, col, element, element_row, element_col);
    return 0;
}