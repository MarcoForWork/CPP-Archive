#include <iostream>

using namespace std;
 int n,S;
int Tinh()
{
     while (S<(n%10))
    {
        S=n%10;
        n=n/10;
    }
    return S;
}
int Nhap()
{
    cin>>n;
    return n;
}

int main()
{
    S=0;
Nhap();
        cout << Tinh()<< endl;

    return 0;
}
