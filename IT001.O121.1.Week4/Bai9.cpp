#include <iostream>
#define MAX 100
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

void insert(int arr[], int n, int &a, int &b)
{
    cin >> a >> b;
    for (int i = (n - 1); i >= b; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[b] = a;
}

void arr_output(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[MAX], n, a, b;
    arr_input(arr, n);
    insert(arr, n, a, b);
    arr_output(arr, n);
    return 0;
}