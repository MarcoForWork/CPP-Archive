#include <iostream>
using namespace std;
int i,n;
double S;
int NhapN()
{
    cin>>n;
    return n;

}
int Tinh()
{
     for (i=1; i<n; i++)
 {
     if (n%i==0) {
        S=S+i;}
 }
 return S;
}
int main()
{

 NhapN();
 cout << Tinh() << endl;
 return 0;

}
