/* Bai16_ham.cpp : Tìm phương trình đường thẳng đi qua 1 điểm
❖ Input : Tọa độ(x, y) của một điểm và số thực a
❖ Output : Phương trình đường thẳng d có hệ số góc là a
và đi qua điểm(x, y)
*/
#include <iostream>
using namespace std;
void PT_Duong_Thang(float x, float y, float a);
int main()
{
	float x, y, a;
	cout << "Nhap toa do (x, y) cua mot diem : ";
	cin >> x >> y;
	cout << "Nhap so thuc a : ";
	cin >> a;
	PT_Duong_Thang(x, y, a);
	return 0;
}
void PT_Duong_Thang(float x, float y, float a) {
	cout << "Phuong trinh duong thang di qua diem co toa do (" << x << ";" << y << ")"
		<< " va co he so goc k = " << a << " la: y = " << a << "(x - " << x << ") + " << a * (-x) + y;
	return;
}


