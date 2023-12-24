#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

#define PI 3.141592654
#define e 2.718281828

float x;

int main()
{
    double y1, y2;
    cout << "Hay nhap gia tri x: ";
    cin >> x;

    y1 = 4 * (pow(x, 2) + 10 * x * sqrt(x) + 3 * x + 1);
    y2 = (sin(PI * pow(x, 2)) + sqrt(pow(x, 2) + 1)) / (pow(e, 2 * x) + cos((PI / 4) * x));

    cout << "Ket qua a: " << y1 << endl;
    cout << "Ket qua b: " << y2;

    return 0;
}