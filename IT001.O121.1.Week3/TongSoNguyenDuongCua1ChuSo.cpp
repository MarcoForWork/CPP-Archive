#include <iostream>

using namespace std;

int S = 0;
int main()
{
    int n;
    cin >> n;

    while (n != 0)
    {
        S += n % 10;
        n /= 10;
    }
    cout << S;
    return 0;
}