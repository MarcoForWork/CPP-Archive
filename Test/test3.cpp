#include <iostream>
using namespace std;
int nhapsonguyen()
{
    int n;
    cout << "Nhap so nguyen n " << endl;
    cin >> n;
    return n;
}
int uocchunglonnhat(int m, int n)
{
    if (m == 0)
    {
        return n;
    }
    return uocchunglonnhat(m, n % m);
}
int tonguochung(int m, int n)
{
    int a = uocchunglonnhat(n, m);
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    /* int m = nhapsonguyen();
    int n = nhapsonguyen();  */
    int m, n;
    cin >> n >> m;
    /* int sum = 0;
    sum = tonguochung(m, n);
    cout << sum; */

    cout << uocchunglonnhat(m, n);

    return 0;
}
