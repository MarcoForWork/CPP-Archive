#include <iostream>>
#include <cmath>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3; // A(x1,y1) B(x2,y2) C(x3,y3)
    double CV,a,b,c; // a b c la do dai tung canh tuong ung ab ac bc
    cin >>x1>>y1;
    cin >>x2>>y2;
    cin>>x3 >>y3;
    a= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    b= sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    c= sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    CV= a+b+c;
    cout << "Chu vi tam giac la " << CV << endl;
    return 0;
}
