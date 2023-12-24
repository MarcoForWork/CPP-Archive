#include <iostream>

using namespace std;

int main()
{
   int n;
   double s;
   cout<< "nhap n"<<endl;
   cin>> n;
   s=0;
   for (int i=1;i<=n;++i){
    s=s+1.0/i;
   }
   cout << "Tong la "<< s;
   return 0;
}
