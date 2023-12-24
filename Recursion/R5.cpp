#include <iostream>

using namespace std;

int count(int n)
{
    if (n < 10)
    {
        return 1;
    }
    else
    {
        return 1 + count(n / 10);
    }
}

int main()
{
    int n;
    cout << "Input a number: ";
    cin >> n;
    cout << "The number of digits of the number is: " << count(n);
    return 0;
}