#include <iostream>
#include <cmath>
using namespace std;

int Nhap()
{
    int n;
    cout << "Nhap so nguyen: ";
    cin >> n;
    return n;
}
bool Prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        return true;
    else
        return false;
}

int main()
{
    int n = Nhap();
    if (Prime(n))
        cout << n << " la so nguyen to";
    else
        cout << n << " khong phai la so nguyen to";
    return 0;
}