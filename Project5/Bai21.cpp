#include <iostream>
using namespace std;

int Nhap()
{
    int n;
    cout << "Nhap so nguyen: ";
    cin >> n;
    return n;
}

int Tong(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n = Nhap();
    cout << Tong(n);
    return 0;
}