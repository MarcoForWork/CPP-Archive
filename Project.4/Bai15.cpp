/* Bai15.cpp : Xấp xỉ số thực
❖ Input : Một số thực x và sai số e
❖ Output : Hai số nguyên a và b sao cho a / b = x + -e */

#include <iostream>
#include <cmath>
using namespace std;
    
int main() {
    double x, e;
    cout << "Nhap so thuc x: ";
    cin >> x;
    cout << "Nhap sai so e: ";
    cin >> e;
    int b = ceil(1 / e);
    int a = round(x * b);
    cout << "a = " << a << " " << "b = " << b;

    return 0;
}

