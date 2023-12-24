#include <iostream>
#include <cmath>

using namespace std;

int a, b, c;
int x, y;

int main()
{
    cout << "Hay nhap lan luot 3 so nguyen: ";
    cin >> a >> b >> c;

    x = max(a, b);
    x = max(x, c);

    y = min(a, b);
    y = min(y, c);

    cout << "Max = " << x << endl;
    cout << "Min = " << y << endl;

    return 0;
}