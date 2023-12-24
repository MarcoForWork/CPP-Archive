/* Bai16.cpp : Tìm phương trình đường thẳng đi qua 1 điểm
❖ Input : Tọa độ(x, y) của một điểm và số thực a
❖ Output : Phương trình đường thẳng d có hệ số góc là a
và đi qua điểm(x, y)
*/
#include <iostream>
using namespace std;
int main()
{
	float x, y, a;
	cin >> x >> y >> a;
	cout << "Phuong trinh duong thang di qua diem co toa do (" << x << ";" << y << ")" 
		<< " va co he so goc k = " << a << " la: y = " << a << "(x - " << x << ") + " << a * (-x) + y ;
}


