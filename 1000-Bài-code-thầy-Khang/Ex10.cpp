#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += float(2 * i + 1) / (2 * i + 2);
    }
    cout << sum;
    return 0;
}