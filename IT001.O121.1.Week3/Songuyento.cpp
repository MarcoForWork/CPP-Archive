#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, demuoc = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            demuoc = demuoc + 1;
    }

    if (demuoc == 1)
        cout << "-1";
    else if (demuoc == 2)
        cout << "1";
    else
        cout << "0";
    return 0;
}