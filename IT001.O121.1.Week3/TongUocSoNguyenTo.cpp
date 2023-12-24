#include <iostream>
#include <cmath>
using namespace std;

bool Prime(int n)
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            dem++;
    }
    if (dem == 2)
        return true;
    else
        return false;
}

int main()
{
    int dem = 0, MIN = 0;
    int m, n, sum = 0;
    cin >> n >> m;
    MIN = min(n, m);
    for (int i = 1; i <= MIN; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            if (Prime(i))
                sum += i;
        }
    }
    if (sum == 0)
        cout << -1;
    else
        cout << sum;
    return 0;
}