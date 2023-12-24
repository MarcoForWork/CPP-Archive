#include <iostream>
using namespace std;

int main()
{
    int x1, y1;
    int x2, y2;
    int x3, y3;
    double x_midpointAB, x_midpointAC, x_midpointBC;
    double y_midpointAB, y_midpointAC, y_midpointBC;
    double xh, yh;

    cout << "Nhap toa do A: ";
    cin >> x1 >> y1;
    cout << "Nhap toa do B: ";
    cin >> x2 >> y2;
    cout << "Nhap toa do C: ";
    cin >> x3 >> y3;

    x_midpointAB = (x1 + x2)/2;
    y_midpointAB = (y1 + y2)/2;

    x_midpointAC = (x1 + x3)/2;
    y_midpointAC = (y1 + y3)/2;

    x_midpointBC = (x2 + x3)/2;
    y_midpointBC = (y2 + y3)/2;

    xh = (x_midpointAB + x_midpointAC + x_midpointBC)/3;
    yh = (y_midpointAB + y_midpointAC + y_midpointBC)/3;

    cout << "Toa do truc tam: H(" << xh << "," << yh << ")";

    return 0;
}