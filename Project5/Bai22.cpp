#include <iostream>
using namespace std;

int Nhap()
{
    int n;
    cout << "Nhap so nguyen: ";
    cin >> n;
    return n;
}

int TongTungSo(int n)
{
    int temp, sum = 0;
    while (n != 0)
    {
        temp = n % 10;
        sum += temp;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n = Nhap();
    cout << TongTungSo(n);
    return 0;
}