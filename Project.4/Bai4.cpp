#include <iostream>

using namespace std;

int main()
{
   int n,s;
   cout<< "nhap n"<<endl;
   cin>> n;
   s=0;
   for (int i=1;i<=n;i++){
    s=s+i*i;
   }
   cout << "Tong la "<<s;

    return 0;
}
