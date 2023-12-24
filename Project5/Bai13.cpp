// Bai13_ham.cpp : 
/* Giải phương trình trùng phương ax4 + bx2 + c = 0
❖ Input : Các hệ số a, b, c
❖Output : Tập nghiệm phương trình trên
*/
#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float& a, float& b, float& c);
int Giai_PT(float a, float b, float c, double& x1, double& x2); 

int main()
{
	// đặt X = x^2, phương trình lúc này : aX^2 + bX + c = 0;
	float a, b, c;
	double X1, X2;
	Nhap(a, b, c );
	if (Giai_PT (a,b,c,X1, X2 ) == 0 )
		cout << "Phuong trinh vo nghiem ! " << endl;
	else if (Giai_PT(a,b,c, X1,X2) == 1) {
		if (X1 < 0)
			cout << "Phuong trinh vo nghiem !"; // Vì X = x^2 > 0;
		else if (X1 == 0)
			cout << "Phuong trinh co mot nghiem x: " << 0 << endl;
		else {
			cout << "Phuong trinh co hai nghiem" << endl;
			cout << "x1 = " << sqrt(X1) << endl;
			cout << "x2 = " << -sqrt(X1) << endl;

		}
	}
	else {
		if (X1 < 0) {
			if (X2 < 0)
				cout << "Phuong trinh vo nghiem";
			else if (X2 == 0)
				cout << "Phuong trinh co mot nghiem x =  " << 0;
			else {
				cout << "Phuong trinh co hai nghiem" << endl;
				cout << "x1 = " << sqrt(X2) << endl;
				cout << "x2 = " << -sqrt(X2) << endl;
			}

		}
		else if (X1 == 0) {
			if (X2 < 0)
				cout << "Phuong trinh co mot nghiem x: " << 0;
			else {
				cout << "Phuong trinh co ba nghiem" << endl;
				cout << "x1 = " << sqrt(X2) << endl;
				cout << "x2 = " << -sqrt(X2) << endl;
				cout << "x3 = " << 0;
			}

		}
		else {
			if (X2 < 0) {
				cout << "Phuong trinh co hai nghiem" << endl;
				cout << "x1 =  " << sqrt(X1) << endl;
				cout << "x2 =  " << -sqrt(X1) << endl;
			}
			else if (X2 == 0) {
				cout << "Phuong trinh co ba nghiem" << endl;
				cout << "x1 = " << sqrt(X1) << endl;
				cout << "x2 = " << -sqrt(X1) << endl;
				cout << "x3 = " << 0;
			}
			else {
				cout << "Phuong trinh co bon nghiem" << endl;
				cout << "x1 =  " << sqrt(X1) << endl;
				cout << "x2 =  " << -sqrt(X1) << endl;
				cout << "x3 = " << sqrt(X2) << endl;
				cout << "x4 = " << -sqrt(X2) << endl;
			}
		}

	}

	return 0;
}
void Nhap(float& a, float& b, float& c) {
	cout << "Nhap cac he so cua phuong trinh ax^4 + bx^2 + c = 0 : " << endl;
	do {
		cout << "Nhap a (a!=0) = ";
		cin >> a;
		cout << "Nhap b = ";
		cin >> b;
		cout << "Nhap c = ";
		cin >> c;
	} while (a == 0);

}
int Giai_PT(float a, float b, float c, double& x1, double& x2) {
	double delta = pow(b, 2) - (4 * a * c);
	if (delta < 0) {
		x1 = x2 = 0.0;
		return 0;
	}
	else if (delta == 0) {
		x1 = x2 = -b / (2 * a);
		return 1;
	}
	else {
		x1 = (-b - sqrt(delta) / (2 * a));
		x2 = (-b + sqrt(delta) / (2 * a));
		return 2;
	}
}
