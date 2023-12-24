#include <iostream>
#include <cmath>

using namespace std;

int Number_plate;
int Digit[5];

int main()
{
    cout << "Hay nhap bien so xe: ";
    cin >> Number_plate;
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        Digit[i] = Number_plate % 10;
        Number_plate = Number_plate / 10;
    }

    int S = 0;
    for (int i = 0; i < 5; i++)
    {
        S = S + Digit[i];
    }

    cout << "So nut cua bien so xe la: " << S;

    return 0;
}
