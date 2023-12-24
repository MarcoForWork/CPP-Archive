/* Bai15_ham.cpp : Xấp xỉ số thực
❖ Input : Một số thực x và sai số e
❖ Output : Hai số nguyên a và b sao cho a / b = x + -e */

#include <iostream>
#include <cmath>
using namespace std;
void Nhap(double& x, double& e);
void Xap_xi_so_thuc(double x, double e);
int main() {
    double x, e;
    Nhap(x, e);
    Xap_xi_so_thuc(x, e);
    return 0;
}
void Nhap(double& x, double& e) {
    cout << "Nhap so thuc x: ";
    cin >> x;
    cout << "Nhap sai so e: ";
    cin >> e;
    return;
}
void Xap_xi_so_thuc(double x, double e) {
    int b = ceil(1 / e);
    int a = round(x * b);
    cout << "a = " << a << " " << "b = " << b;
    return;
}
