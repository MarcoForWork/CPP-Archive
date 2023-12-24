#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int reverse_number(int n)
{
    int reversed_number = 0;
    while (n != 0)
    {
        int remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    return reversed_number;
}

int digit_sum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int solve(int x, int y)
{
    int count = 0;
    for (int a = x; a <= y; a++)
    {
        for (int b = a; b <= y; b++)
        {
            int g = gcd(a, b);
            if (is_prime(reverse_number(digit_sum(g))))
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << solve(x, y);
}
