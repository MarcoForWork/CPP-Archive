#include <iostream>
using namespace std;

int main()
{
    int n, temp = 0;
    float sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        temp += i;
        sum += float(1) / temp;
    }
    cout << sum;
    return 0;
}