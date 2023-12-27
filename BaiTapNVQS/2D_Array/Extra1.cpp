// Nhập mảng / Xuất mảng
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

void display_output(int array[][MAX], int row, int col)
{
    cout << "Entered array: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int array[MAX][MAX], row, col;
    input(array, row, col);
    display_output(array, row, col);
    return 0;
}