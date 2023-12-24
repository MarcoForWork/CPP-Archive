/* Bai12.cpp :.Cho tam giác ABC tọa độ A(x1, y1), B(x2, y2), C(x3, y3) điểm
M(xm, ym)
❖ Input : Nhập tọa độ A(x1, y1), B(x2, y2), C(x3, y3), M(xm, ym)
❖ Output : M có thuộc tam giác ABC không ? */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, y1, x2, y2, x3, y3, xm, ym;
	cout << "Nhap toa do 3 diem cua tam giac ABC : ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3;
	cout << "Nhap toa do diem M :";
	cin >> xm >> ym;
	float S_ABC = 0.5 * abs(x1* ( y2 - y3 ) + x2*( y3 - y1 ) + x3*(y1 - y2 ));
	float S_MBC = 0.5 * abs(xm* ( y2 - y3 ) + x2*( y3 - ym ) + x3*(ym - y2 ));
	float S_MCA = 0.5 * abs(xm* ( y3 - y1 ) + x3*( y1 - ym ) + x1*(ym - y3 ));
	float S_MAB = 0.5 * abs(xm* ( y1 - y2 ) + x1*( y2 - ym ) + x2*(ym - y1 ));

	if (S_MBC + S_MCA + S_MAB == S_ABC) {
		cout << "M thuoc tam giac ABC";
	}
	else
		cout << "M khong thuoc tam giac ABC";
	
	return 0;
}
