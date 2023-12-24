#include <iostream>
#include <math.h>


using namespace std;

float a,b;

int main()
{
    cin >> a >> b;

    if (a != 0)
    {
        if (b != 0)
        {
            float (x) = -b / a;
            cout << "{" << x << "}";
        }
    } else if (b == 0)
    {
        cout << "ℝ";
    } else 
        {
            cout << "Ø";
        }
    
    return 0;
}