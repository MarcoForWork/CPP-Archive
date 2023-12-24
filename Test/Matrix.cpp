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

void display_output(int result_array[][1], int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << result_array[a][1] << "\n";
    }
}

void is_sum(int Maxtrix[][MAX], int result_array[][1], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        result_array[i][1] = 0;
    }

    // Tong cac phan tu tren mot hang
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            result_array[i][1] += Maxtrix[i][j];
        }
    }
}

int main()
{
    int Maxtrix[MAX][MAX], result_Matrix[MAX][1], a, b;
    input(Maxtrix, a, b);
    is_sum(Maxtrix, result_Matrix, a, b);
    cout << "Result: \n";
    display_output(result_Matrix, a);
    return 0;
}