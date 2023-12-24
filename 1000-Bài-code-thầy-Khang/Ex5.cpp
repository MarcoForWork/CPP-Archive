#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    float sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += float(1) / i;
    }
    cout << sum;
    return 0;
}