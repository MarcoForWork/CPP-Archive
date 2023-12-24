#include <iostream>

using namespace std;

void numP(int n)
{
    if (n <= 50)
    {
        cout << " " << n;
        numP(n + 1);
    }
}

int main()
{
    int n = 1;
    numP(n);
    return 0;
}
