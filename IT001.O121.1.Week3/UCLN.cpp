#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m, n, UCLN = 0;
    cin >> n >> m;
    for (int i = 1; i <= min(m, n); i++)
    {
        if (n % i == 0 and m % i == 0)
        {
            if (UCLN < i)
                UCLN = i;
        }
    }
    cout << UCLN;
    return 0;
}