#include <iostream>
#include <cmath>
using namespace std;

// Find greatest common divisor
int GCD(int n, int m)
{
    int GCD = 0, MIN = min(n, m);
    for (int i = 1; i <= MIN; i++)
    {
        if (n % i == 0 and m % i == 0)
        {
            if (GCD <= i)
                GCD = i;
        }
    }
    return GCD;
}

// Sum of every single number of a number
int SumSingleNum(int n)
{
    int sum = 0, temp = 0;
    while (n != 0)
    {
        temp = n % 10;
        sum += temp;
        n /= 10;
    }
    return sum;
}

// Reverse a number
int reverse(int n)
{
    int rnum = 0, temp = 0;
    while (n != 0)
    {
        temp = n % 10;
        rnum = rnum * 10 + temp;
        n /= 10;
    }
    return rnum;
}

// Prime check ìf a number is prime or not
bool Prime(int n)
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            dem++;
    }
    if (dem == 2)
        return true;
    else
        return false;
}

int main()
{
    int count = 0;
    int x, y;
    cin >> x >> y;
    for (int a = x; a <= y; a++)
    {
        for (int b = a; b <= y; b++)
        {
            if (Prime(reverse(SumSingleNum(GCD(a, b)))))
                count++;
        }
    }
    cout << count;

    return 0;
}