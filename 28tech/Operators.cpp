#include <iostream>
using namespace std;

// "=, +=, -=, /=, %=" Assignment operators: Toan tu gan
// "+, -, *, /, %, ++, --" Arithmetic operators: Toan tu toan hoc
// ">, >=, <, <=, ==, !=" Comparison operators: Toan tu so sanh
// "AND, OR, NOT" Logic operators: Toan tu logic
/*
AND : &&
OR : ||
NOT : !
 */

int main()
{
    int a = 500, b = 200;

    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    float thuong = (float)a / b;
    int du = a % b;
    cout << tong << " " << hieu << " " << tich << " " << thuong << " " << du;

    bool ok = a >= b; // true
    cout << ok << endl;
    bool ko = a == b;
    cout << ko << endl;

    return 0;
}