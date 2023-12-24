#include <iostream>
using namespace std;

int is_Sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + is_Sum(n - 1);
    }
}

int main()
{
    cout << is_Sum(5);
    return 0;
}