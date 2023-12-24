#include <iostream>

using namespace std;

float is_sum(int n)
{
    if (n == 1)
        return 1;
    else
        return float(1) / (2 * n) + is_sum(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << is_sum(n);
    return 0;
}