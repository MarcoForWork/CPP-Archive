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

int arr_pmax(int arr[], int n)
{
    int pmax = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > pmax)
        {
            pmax = arr[i];
        }
    }
    return pmax;
}

int arr_smax(int arr[], int n, int pmax)
{
    int smax = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != pmax && arr[i] > smax)
            smax = arr[i];
    }
    return smax;
}

int main()
{
    int arr[MAX], n;
    arr_input(arr, n);
    int pmax = arr_pmax(arr, n);
    cout << arr_smax(arr, n, pmax);
    return 0;
}