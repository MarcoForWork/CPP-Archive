#include <iostream>

using namespace std;

int main()
{
    int n;
   double s;
   cout<< "nhap n"<<endl;
   cin>> n;
   s=1;
   for (int i=1;i<=n;++i){
    s=s+1.0/(i*(i+1));
   }
   cout << "Tong la "<< s;

    return 0;
}
