#include <iostream>>
#include <cmath>
#include <math.h>
using namespace std;
float Tinh(int x1,int y1, int x2, int y2, int x3,int y3)
{
    float a= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    float b= sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    float c= sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    float p,S;
    p= (a+b+c)/2;
    S= sqrt(p*(p-a)*(p-b)*(p-c));
    return S;

}
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin >>x1>>y1;
    cin >>x2>>y2;
    cin>>x3 >>y3;
    cout << Tinh(x1,y1,x2,y2,x3,y3)<< endl;
    return 0;
}
