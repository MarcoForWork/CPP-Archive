#include <iostream>

using namespace std;

using namespace std;
int reverse(int n, int Rn = 0)
{
    if (n == 0)
    {
        return Rn;
    }

    return reverse(n / 10, Rn * 10 + n % 10);
}

int main()
{
    int n;
    cin >> n;

    cout << reverse(n);
    return 0;
}
