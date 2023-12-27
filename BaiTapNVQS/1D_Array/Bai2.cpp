// Kiểm tra mảng có đối xứng hay không ?
#include <iostream>
#define MAX 100
using namespace std;

void input(int array[MAX], int &a)
{
    cout << "Enter array size: ";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }
}

void Check_Symmtry(int array[MAX], int a, bool result)
{
    int b = a - 1;
    for (int i = 0; i < a; i++)
    {
        if (array[i] == array[b])
            result = true;
        else
            result = false;
        b--;
    }
    if (result)
        cout << "Symmetric array";
    else
        cout << "Asymmetric array";
}

int main()
{
    int array[MAX], a;
    bool result;
    input(array, a);
    Check_Symmtry(array, a, result);
    return 0;
}