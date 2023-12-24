#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += float(1) / (x * i * (i + 1));
    }
    cout << sum;
    return 0;
}