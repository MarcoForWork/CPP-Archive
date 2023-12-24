#include <iostream>
using namespace std;
 double dientich(double r){
     const double PI = 3.14;
    double s= PI*r*r;
    return s;
 }

int main()
{
    double r;
      cin>> r;
      cout <<dientich(r) ;
    return 0;
}

