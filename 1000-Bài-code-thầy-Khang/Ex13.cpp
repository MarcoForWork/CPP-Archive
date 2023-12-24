#include <iostream>
using namespace std;

int main()
{
    int x, n, t = 1;
    cin >> x >> n;
    for (int i = 1; i <= 2 * n; i++)
    {
        t *= x;
    }
    cout << t;
    return 0;
}