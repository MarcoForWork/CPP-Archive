#include <iostream>
using namespace std;

int Fibonancci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return Fibonancci(n - 1) + Fibonancci(n - 2);
    }
}

int numP(int n)
{
    if (n >= 1)
    {
        numP(n - 1);
        cout << Fibonancci(n) << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    cout << numP(n);
    return 0;
}