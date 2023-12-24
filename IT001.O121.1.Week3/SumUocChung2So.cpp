#include <iostream>
#include <cmath>

using namespace std;

int n, m;
int S = 0;
int main()
{
    cin >> n >> m;

    for (int i = 1; i < (m+n); i++)
    {
        if (n % i == 0 && m % i == 0)
        S += i;
    }

    cout << S;

    return 0;

}