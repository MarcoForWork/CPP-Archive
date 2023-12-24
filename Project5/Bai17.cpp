#include <iostream>
using namespace std;

double s(int a, int b, int c)
{
    float x = (a + b + c) / 3;
    return x;
}
double mid(int a, int b)
{
    double midpoint;
    midpoint = (a + b) / 2;
    return midpoint;
}

void Intuition(int a1, int b1, int a2, int b2, int a3, int b3)
{
    double x_mAB, y_mAB, x_mAC, y_mAC, x_mBC, y_mBC;
    double xi, yi;

    x_mAB = mid(a1, a2);
    y_mAB = mid(b1, b2);

    x_mAC = mid(a1, a3);
    y_mAC = mid(b1, b3);

    x_mBC = mid(a2, a3);
    y_mBC = mid(b2, b3);

    xi = s(x_mAB, x_mAC, x_mBC);
    yi = s(y_mAB, y_mAC, y_mBC);

    cout << "Intuition: H (" << xi << "," << yi << ")";
}

int main()
{
    int x1, x2, x3, y1, y2, y3;
    cout << "Enter A: ";
    cin >> x1 >> y1;
    cout << "Enter B: ";
    cin >> x2 >> y2;
    cout << "Enter C: ";
    cin >> x3 >> y3;

    Intuition(x1, y1, x2, y2, x3, y3);
    return 0;
}