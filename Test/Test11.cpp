#include <iostream>
#define MAX 99
using namespace std;

int input()
{
    int n;
    cin >> n;
    return n;
}

void arr_input(int arr[], int &n)
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        arr[i] = input();
    }
}

void output(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
            cout << arr[i] << " ";
    }
}

int main()
{
    int arr[MAX], n;
    arr_input(arr, n);
    output(arr, n);
    return 0;
}