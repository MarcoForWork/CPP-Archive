#include <iostream>
using namespace std;

int main()
{
    int n, x, t = 1;
    cin >> x >> n;
    for (int i = 1; i <= n; i++)
    {
        t *= x;
    }
    cout << t;
    return 0;
}