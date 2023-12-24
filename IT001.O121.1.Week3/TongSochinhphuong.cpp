#include <iostream>
#include <cmath>

using namespace std;

int n;
int s=0;
double c;

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            {
                c = sqrt(i);
                if (fmod(c,1.0)==0)
                    s += i;
            }
    }

    cout << s;

    return 0;
}