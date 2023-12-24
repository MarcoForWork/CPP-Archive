#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
    int n;

    cin >> a >> n;

    a = a * n;

    /*Round() is used to round up any type of data ex: Double, float or long double. Roundup if x >= x.5. Rounddown if x < x.5 */
    a = round(a);

    a = a / n;

    cout.precision(10);
    cout << a;

    return 0;
}
