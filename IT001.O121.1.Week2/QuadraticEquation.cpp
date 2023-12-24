#include <iostream>
#include <cmath>

using namespace std;

float a, b, c;
float x1, x2;
float Delta;

int main()
{
    cin >> a >> b >> c;
    Delta = pow(b,2) - 4 * a * c;

    if (a != 0)
    {
        if (Delta < 0)
        {
            cout << "PTVN";
        }
        else if (Delta == 0)
        {
            x1 = x2 = -b / (2 * a);
            cout << "PT co nghiem kep: x1 = x2 = " << x1;
        }
        else 
        {
            x1 = (-b + sqrt(Delta)) / (2 * a);
            x2 = (-b - sqrt(Delta)) / (2 * a);

            cout << "PT co hai nghiem phan biet:" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2;
        }
    } 
    else if (b != 0)
    {
        x1 = x2 = -c / b;
        cout << "PT co nghiem kep: x1 = x2 = " << x1;
    } else
        {
            cout << "PTVN";
        }

    return 0;
    
}