#include <iostream>
using namespace std;

int main()
{
    int n, x, t = 1;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        t *= x * i;
    }
    cout << t;
    return 0;
}
