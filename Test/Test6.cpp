#include <iostream>
using namespace std;

void swap_thamtri(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap_thamchieu(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    cout << "Gia tri goc: " << a << " " << b << endl;
    swap_thamtri(a, b);
    cout << "Tham tri: " << a << " " << b << endl;
    swap_thamchieu(a, b);
    cout << "Tham chieu: " << a << " " << b << endl;
    return 0;
}