// Nhân 2 ma trận
#include <iostream>
#define MAX 100
using namespace std;

void input(int Maxtrix[][MAX], int &a, int &b)
{
    cout << "Nhap hang va cot: ";
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "Nhap phan tu " << i + 1 << "," << j + 1 << " : ";
            cin >> Maxtrix[i][j];
        }
    }
}

void output(int result_Matrix[][MAX], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << result_Matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void is_Matrix_Multi(int Maxtrix_1[][MAX], int Maxtrix_2[][MAX], int result_Matrix[][MAX], int row_M1, int col_M1, int row_M2, int col_M2)
{
    for (int i = 0; i < row_M1; i++)
    {
        for (int j = 0; j < col_M2; j++)
        {
            result_Matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < row_M1; i++)
    {
        for (int j = 0; j < col_M2; j++)
        {
            for (int k = 0; k < col_M1; k++)
            {
                result_Matrix[i][j] += Maxtrix_1[i][k] * Maxtrix_2[k][j];
            }
        }
    }
}

int main()
{
    int Maxtrix_1[MAX][MAX], row_M1, col_M1;
    int Maxtrix_2[MAX][MAX], row_M2, col_M2;
    int result_Matrix[MAX][MAX];

    input(Maxtrix_1, row_M1, col_M1);
    input(Maxtrix_2, row_M2, col_M2);

    while (col_M1 != row_M2)
    {
        cout << "ERROR!\n";
        cout << "Hay nhap lai!\n";
        input(Maxtrix_1, row_M1, col_M1);
        input(Maxtrix_2, row_M2, col_M2);
    }

    is_Matrix_Multi(Maxtrix_1, Maxtrix_2, result_Matrix, row_M1, col_M1, row_M2, col_M2);
    output(result_Matrix, row_M1, col_M2);
    return 0;
}