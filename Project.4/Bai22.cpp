#include <iostream>
#include <cmath>

using namespace std;

int n;
long int Digit[100000000];

int main()
{
    cout << "Hay nhap so n: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < 100000000; i++)
    {
        Digit[i] = n % 10;
        n = n / 10;
    }

    int S = 0;
    for (int i = 0; i < 100000000; i++)
    {
        S = S + Digit[i];
    }

    cout << "Tong = " << S;

    return 0;
}