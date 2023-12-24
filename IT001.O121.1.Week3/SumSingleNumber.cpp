#include <iostream>
#include <cmath>

using namespace std;

int n, nn;
int S;

int main()
{
    cin >> n;
    for (int i = 0;i < 100000000;i++)
    {
        nn = n % 10;
        n = n / 10;
        S = S + nn;
    }


    cout << S;

    return 0;
}