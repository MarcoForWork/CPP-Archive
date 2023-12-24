#include <iostream>>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;
float Tinh(int x1,int y1, int x2, int y2, int x3,int y3)
{
    float A= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    float B= sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    float C= sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    return A+B+C;
}
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin >>x1>>y1;
    cin >>x2>>y2;
    cin>>x3 >>y3;
    cout<<setprecision(5)<<fixed<<Tinh(x1,y1,x2,y2,x3,y3)<<endl;
    return 0;
}
