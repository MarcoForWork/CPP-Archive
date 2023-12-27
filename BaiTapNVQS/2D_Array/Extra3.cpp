// Kiểm tra mảng có đối xứng qua đường chéo chính hay không?
#include <iostream>
#define MAX 100
using namespace std;

void input(int array[][MAX], int &size)
{
    cout << "Enter array's size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Enter element " << i + 1 << "," << j + 1 << ": ";
            cin >> array[i][j];
        }
    }
}

void check_symetric_array(int array[][MAX], int size, bool Symetric)
{
    Symetric = true;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i][j] != array[j][i])
            {
                Symetric = false;
                break;
            }
        }
    }
    if (Symetric)
        cout << "Symetric array";
    else if (!Symetric)
        cout << "Asymetric array";
}

int main()
{
    int array[MAX][MAX], size;
    bool Symetric;
    input(array, size);
    check_symetric_array(array, size, Symetric);
}