// Tính tổng các phần tử trên dòng/cột/toàn mảng/đường chéo chính/nửa trên/nửa dưới
#include <iostream>
#define MAX 100
using namespace std;

void input(int array[][MAX], int &row, int &col)
{
    cout << "\nEnter array row and col: ";
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

void is_sum_row(int array[][MAX], int row, int col, int &sum_row)
{
    int selected_row;
    cout << "Select a row to sum: ";
    cin >> selected_row;

    sum_row = 0;
    for (int i = 0; i < col; i++)
    {
        sum_row += array[selected_row - 1][i];
    }
    cout << "The sum of the " << selected_row << " row has the value of: " << sum_row;
}

void is_sum_col(int array[][MAX], int row, int col, int &sum_col)
{
    int selected_col;
    cout << "Select a col to sum: ";
    cin >> selected_col;

    sum_col = 0;
    for (int i = 0; i < row; i++)
    {
        sum_col += array[selected_col - 1][i];
    }
    cout << "The sum of the " << selected_col << " col has the value of: " << sum_col;
}

void is_sum_all(int array[][MAX], int row, int col, int &sum_all)
{
    sum_all = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum_all += array[i][j];
        }
    }
    cout << "The sum of all elements in the array is: " << sum_all;
}

void is_sum_above(int array[][MAX], int row, int col, int &sum_above)
{
    sum_above = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j > i)
            {
                sum_above += array[i][j];
            }
        }
    }
    cout << "The sum of all elements above the main diagnal line is: " << sum_above;
}

void is_sum_below(int array[][MAX], int row, int col, int &sum_below)
{
    sum_below = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j < i)
            {
                sum_below += array[i][j];
            }
        }
    }
    cout << "The sum of all elements below the main diagnal line is: " << sum_below;
}

void is_sum_diagnal(int array[][MAX], int row, int col, int &sum_diagnal)
{
    sum_diagnal = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
                sum_diagnal += array[i][j];
        }
    }
    cout << "The sum of all elements on the main diagnal line is: " << sum_diagnal;
}

void Mode(int array[][MAX], int row, int col, int mode, int sum_row, int sum_col, int sum_all, int sum_above, int sum_below, int sum_diagnal)
{
    cout << "-------------------------------CHOOSE MODE-------------------------------\n";
    cout << "1: Sum selected row\n";
    cout << "2: Sum selected col\n";
    cout << "3: Sum all elements\n";
    cout << "4: Sum all elements above the main diagnal line\n";
    cout << "5: Sum all elements below the main diagnal line\n";
    cout << "6: Sum all elements on the main diagnal line\n";
    cout << "-------------------------------------------------------------------------\n";

    cout << "\nChoosing mode: ";
    cin >> mode;
    while (mode < 1 || mode > 6)
    {
        cout << "Choose again: ";
        cin >> mode;
    }

    switch (mode)
    {
    case 1:
        input(array, row, col);
        is_sum_row(array, row, col, sum_row);
        break;
    case 2:
        input(array, row, col);
        is_sum_col(array, row, col, sum_col);
        break;
    case 3:
        input(array, row, col);
        is_sum_all(array, row, col, sum_all);
        break;
    case 4:
        input(array, row, col);
        while (row != col)
        {
            cout << "Make sure that row equal to col\n";
            input(array, row, col);
        }
        is_sum_above(array, row, col, sum_above);
        break;
    case 5:
        input(array, row, col);
        while (row != col)
        {
            cout << "Make sure that row equal to col\n";
            input(array, row, col);
        }
        is_sum_below(array, row, col, sum_below);
        break;
    case 6:
        input(array, row, col);
        while (row != col)
        {
            cout << "Make sure that row equal to col\n";
            input(array, row, col);
        }
        is_sum_diagnal(array, row, col, sum_diagnal);
        break;
    }
}

int main()
{
    int array[MAX][MAX], row, col, mode;
    int sum_row, sum_col, sum_all, sum_above, sum_below, sum_diagnal;

    Mode(array, row, col, mode, sum_row, sum_col, sum_all, sum_above, sum_below, sum_diagnal);

    return 0;
}