#include <iostream>

using namespace std;
 double tong(int n){
  double s=1;
   for (int i=1;i<=n;++i){
    s=s+1.0/(i*(i+1));
   }
   return s;
 }

int main()
{
    int n;
   cin>> n;
   cout << tong(n);
    return 0;
}
