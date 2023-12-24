// Bai14.cpp : Tìm hai số biết tổng và tỉ
/*❖ Input : Giá trị tổng của 2 số a và b và giá trị tỉ số của a / b
❖ Output : Giá trị a và giá trị b */

#include <iostream>
using namespace std;

void Nhap(float& tong, float& ti);
float tinh_b(float tong, float ti);
float tinh_a(float tong, float b);
int main()
{
    float tong, ti, a, b;
    Nhap(tong, ti);
    b = tinh_b(tong, ti);
    a = tinh_a(tong, b);
    cout << "a = " << a << "\t" << "b = " << b;
    return 0;
}
void Nhap(float& tong, float& ti) {
    cout << " a + b = ";
    cin >> tong;
    cout << " a / b = ";
    cin >> ti;
    return;
}
float tinh_b(float tong, float ti) {
    float b = tong / (ti + 1);
    return b;
}
float tinh_a(float tong, float b) {
    float a = tong - b;
    return a;
}