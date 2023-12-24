#include <iostream>
#include <cmath>

using namespace std;

double n,x;
double s1=1, s2=1, s3=1;
double giaithua=1;

int main()
{
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
    {
        s1 = s1 + pow(x,i);

        s2 = s2 + pow(x,2*i);
    }

    for (int i = 1; i <= n; i++)
    {
        giaithua = giaithua*i;
        s3 = s3 + (pow(x,i)/giaithua);
    }
    cout << s1 << "\n" << s2 << "\n" << s3;

    return 0;
}