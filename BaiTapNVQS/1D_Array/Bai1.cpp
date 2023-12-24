#include <iostream>
#define MAX 100
using namespace std;

bool is_prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count != 2)
        return false;
    else
        return true;
}

void input(int array[MAX], int &a)
{
    cout << "Enter array's size: ";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }
}

void display_output(int array[MAX], int prime_num[MAX], int a)
{
    int j = 0;
    for (int i = 0; i < a; i++)
    {
        if (is_prime(array[i]))
        {
            prime_num[j] = array[i];
            j++;
        }
    }

    for (int i = 0; i < j; i++)
        cout << prime_num[i] << " ";
}

int main()
{
    int array[MAX], a, prime_num[MAX];
    input(array, a);
    display_output(array, prime_num, a);
    return 0;
}