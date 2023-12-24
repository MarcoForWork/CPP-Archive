#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float a;
    cin >> a;

    float P;
    P = a * 4;
    cout << "Chu vi: " << setprecision(2) << fixed << P << endl;

    float S;
    S = a * a;
    cout << "Dien tich: " << setprecision(2) << fixed << S << endl;

    return 0;

}