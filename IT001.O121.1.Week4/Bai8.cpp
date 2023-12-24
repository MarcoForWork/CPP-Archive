#include <iostream>
#define MAX 99
using namespace std;

int input()
{
    int n;
    cin >> n;
    return n;
}

bool is_prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        return true;
    else
        return false;
}

void arr_input(int arr[], int &n)
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        arr[i] = input();
    }
}

void arr_output(int arr[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_prime(arr[i]))
        {
            cout << arr[i] << " ";
            k = 1;
        }
    }
    if (k == 0)
        cout << 0;
}

int main()
{
    int arr[MAX], n;
    arr_input(arr, n);
    arr_output(arr, n);
    return 0;
}