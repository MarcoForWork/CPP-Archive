#include <iostream>
using namespace std;

void sum(int n)
{
    int Sum = 0, temp = 0;
    while (n != 0)
    {
        temp = n % 10;
        Sum += temp;
        n /= 10;
    }
    cout << Sum;
}

int main()
{
    int n;
    cin >> n;
    sum(n);
    return 0;
}