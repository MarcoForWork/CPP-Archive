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

int arr_max(int arr[], int n, int max = 0)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= max)
            max = arr[i];
    }
    return max;
}

void arr_cmax(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr_max(arr, n))
            count++;
    }
    cout << count;
}

int main()
{
    int arr[MAX], n;
    arr_input(arr, n);
    cout << arr_max(arr, n) << "\n";
    arr_cmax(arr, n);
    return 0;
}