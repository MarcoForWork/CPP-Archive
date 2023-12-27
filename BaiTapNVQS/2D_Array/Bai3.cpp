// Tính tổng các giá trị lớn nhất trên mỗi dòng.
#include <iostream>
#define MAX 100
using namespace std;

void input(int Maxtrix[][MAX], int &a, int &b)
{
    cout << "Enter rows and cols: ";
    cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "Enter element " << i + 1 << "," << j + 1 << " : ";
            cin >> Maxtrix[i][j];
        }
    }
}

void find_max_element_each_row(int Maxtrix[][MAX], int result_array[][1], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        result_array[i][0] = 0;
    }

    // Tong cac phan tu tren mot hang
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (result_array[i][0] < Maxtrix[i][j])
                result_array[i][0] = Maxtrix[i][j];
        }
    }
}

void sum_Matrix(int Matrix[][1], int a)
{
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += Matrix[i][0];
    }
    cout << "Result: " << sum;
}

int main()
{
    int Maxtrix[MAX][MAX], result_Matrix[MAX][1], a, b;
    input(Maxtrix, a, b);
    find_max_element_each_row(Maxtrix, result_Matrix, a, b);
    sum_Matrix(result_Matrix, a);
    return 0;
}