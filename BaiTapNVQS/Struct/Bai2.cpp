#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    float x;
    float y;
    float z;

    void input()
    {
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter y: ";
        cin >> y;
        cout << "Enter z: ";
        cin >> z;
    }

    void output()
    {
        cout << "\nx: " << x;
        cout << "\ny: " << y;
        cout << "\nz: " << z;
    }
};

int main()
{
    Point A;
    A.input();
    A.output();
    return 0;
}
