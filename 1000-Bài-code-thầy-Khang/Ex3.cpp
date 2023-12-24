#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int temp = 0;
    int n, x;
    float sum = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        temp += i;
        sum += pow(x, i) / temp;
    }
    cout << sum;
    return 0;
}