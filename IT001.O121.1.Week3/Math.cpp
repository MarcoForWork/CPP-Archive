#include <iostream>
#include <cmath>

using namespace std;

double S1=0;
double S2=0;
double S3=0;
int S2_temp=1;
double S3_temp=0;

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        S1 = S1 + pow(i,i);

        S2_temp *= i;
        S2 += S2_temp;

        S3_temp += i;
        S3 += 1.0 / S3_temp;

    }
    cout << S1 << "\n" << S2 << "\n" << S3;
    return 0;
}