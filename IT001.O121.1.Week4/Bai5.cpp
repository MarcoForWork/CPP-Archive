#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float calculate(int n)
{
    if (n == 1)
    {
        return float(1);
    }
    else
    {
        return sqrt(n + calculate(n - 1));
    }
}

int main()
{
    int n;
    cin >> n;
    cout << fixed << setprecision(2) << calculate(n);
    return 0;
}