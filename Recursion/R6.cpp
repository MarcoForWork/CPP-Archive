#include <iostream>

using namespace std;

int is_sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + is_sum(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << is_sum(n);
    return 0;
}