#include <iostream>

using namespace std;

void input(int &n)
{
    int k;
    cin >> k;
    if (k > 0)
    {
        n = k;
    }
}

int sum(int n, int &s);
int main()
{
    int n, s = 0;
    input(n);
    sum(n, s);
    cout << s;
    return 0;
}
int sum(int n, int &s)
{
    int remind = n % 10;
    if (n != 0)
    {
        s = remind + sum(n / 10, s);
    }
    return s;
}