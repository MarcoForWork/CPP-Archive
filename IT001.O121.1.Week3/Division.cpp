#include <iostream>
#include <cmath>

using namespace std;

int n;
int S = 0;
int main()
{
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        S += i;
    }

    cout << S;

    return 0;

}