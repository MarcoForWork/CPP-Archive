#include <iostream>

using namespace std;
int main()
{
    int n,S;
    cin>> n;
    S=0;
    while (S<(n%10))
    {
        S=n%10;
        n=n/10;
    }

        cout << S<< endl;

    return 0;
}
