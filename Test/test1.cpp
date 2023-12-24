#include <iostream>
#include <cmath>
using namespace std;

int sumPrimeDivisors(int n)
{
    int sum = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            bool isPrime = true;
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
                sum += i;

            if (i != (n / i))
            {
                int temp = n / i;
                isPrime = true;
                for (int j = 2; j <= sqrt(temp); j++)
                {
                    if (temp % j == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
                if (isPrime)
                    sum += temp;
            }
        }
    }
    return sum;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum of prime divisors of " << a << ": " << sumPrimeDivisors(a) << endl;
    cout << "Sum of prime divisors of " << b << ": " << sumPrimeDivisors(b) << endl;
    return 0;
}
