#include <iostream>
#include <cmath>
#include <iomanip>

#define Area(p, a, b, c) sqrt(p *(p - a) * (p - b) * (p - c))

using namespace std;

float a, b, c;
float S;

int main()
{
    cin >> a >> b >> c;

    float(p) = (a + b + c) / 2;

    S = Area(p, a, b, c);

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
        {
            cout << "Tam giac vuong, dien tich = " << setprecision(2) << fixed << S;
        }
        else if (a == b && b == c)
        {
            cout << "Tam giac deu, dien tich = " << setprecision(2) << fixed << S;
        }
        else if (a == b || a == c || b == c)
        {
            cout << "Tam giac can, dien tich = " << setprecision(2) << fixed << S;
        }
        else
        {
            cout << "Tam giac thuong, dien tich = " << setprecision(2) << fixed << S;
        }
    }
    else
    {
        cout << "Khong phai tam giac";
    }

    return 0;
}
