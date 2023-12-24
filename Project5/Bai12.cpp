/* Bai12.cpp :.Cho tam giác ABC tọa độ A(x1, y1), B(x2, y2), C(x3, y3) điểm
M(xm, ym)
❖ Input : Nhập tọa độ A(x1, y1), B(x2, y2), C(x3, y3), M(xm, ym)
❖ Output : M có thuộc tam giác ABC không ? */

#include <iostream>
#include <cmath>
using namespace std;
double Dien_Tich(float x1, float y1, float x2, float y2, float x3, float y3);
int main()
{
	float x1, y1, x2, y2, x3, y3, xm, ym;
	cout << "Nhap toa do 3 diem cua tam giac ABC : ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << "Nhap toa do diem M :";
	cin >> xm >> ym;
	double S_ABC = Dien_Tich(x1, y1, x2, y2, x3, y3);
	double S_MBC = Dien_Tich(xm, ym, x2, y2, x3, y3);
	double S_MCA = Dien_Tich(xm, ym, x3, y3, x1, y1);
	double S_MAB = Dien_Tich(xm, ym, x1, y1, x2, y2);
	
	if (S_MBC + S_MCA + S_MAB == S_ABC) {
		cout << "M thuoc tam giac ABC";
	}
	else
		cout << "M khong thuoc tam giac ABC";
	
	return 0;
}
double Dien_Tich(float x1, float y1, float x2, float y2, float x3, float y3) {
	float S = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
	return S;
}