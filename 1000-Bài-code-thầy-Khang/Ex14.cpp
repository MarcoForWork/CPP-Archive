#include <iostream>
using namespace std;

int main()
{
    int n, x, sum = 1;
    cin >> n >> x;
    for (int i = 1; i < n; i++)
    {
        sum += x * i * (i + 1);
    }
    cout << sum;
    return 0;
}