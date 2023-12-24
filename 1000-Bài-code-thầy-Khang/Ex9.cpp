#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += float(i) / (i + 1);
    }
    cout << sum;
    return 0;
}