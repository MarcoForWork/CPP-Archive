#include <iostream>
using namespace std;

int Nhap()
{
    int n;
    cout << "Nhap so nguyen: ";
    cin >> n;
    return n;
}

int Divisors(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
}

int main()
{
    int n = Nhap();
    cout << "Uoc chung la: ";
    cout << Divisors(n);
    return 0;
}