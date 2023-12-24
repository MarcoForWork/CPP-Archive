#include <iostream>
using namespace std;

void sorting(int &a, int &b, int &c, int &d)
{
    if (a > b)
        swap(a, b);
    if (b > c)
        swap(c, b);
    if (c > d)
        swap(d, c);
    if (d > a)
        swap(a, d);
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    sorting(a, b, c, d);
    cout << a << " " << b << " " << c << " " << d;
    return 0;
}