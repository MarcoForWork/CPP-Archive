#include <iostream>

using namespace std;
int main()
{
    int n,S;
    cin>> n;
    S=1;
    while (n>=10)
    {
        n=n/10;
        S=S+1;
    }

        cout << S<< endl;

    return 0;
}
