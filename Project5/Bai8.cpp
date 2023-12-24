#include <iostream>

using namespace std;
 int n,S;
int Nhap()
{
    cin>>n;
    return n;
}

int Tinh()
{
    while (n>=10)
    {
        n=n/10;
        S=S+1;
    }
    return S;
}

int main()
{
    S=1;
    Nhap();
        cout << Tinh()<< endl;
    return 0;
}
