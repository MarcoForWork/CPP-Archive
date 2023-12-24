#include <iostream>
#include <iomanip>

using namespace std;

int a, b;

int main()
{
    cin >> a;
    cin >> b;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " x " << b << " = " << a * b << endl;
    cout << a << " : " << b << " = " << setprecision(2) << fixed << float (a) / b << endl;
 


    return 0;

}