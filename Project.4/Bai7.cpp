#include <iostream>
using namespace std;
int main()
{
 int n,i;
 double S;
 cin>>n;
 for (i=1; i<n; i++)
 {
     if (n%i==0) {
        S=S+i;}
 }
 cout << S << endl;
 return 0;

}
