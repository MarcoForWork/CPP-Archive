#include <iostream>
using namespace std;
int main()
{
    int i=1,n,demuoc=0;  
    cout<<"nhap n = ";
    cin>>n;  
    do
    {
        if(n%i==0)  
        demuoc++; 
        i++;
     }
    while (i<=n);     
    if (demuoc==2) 
        cout<<"la so nguyen to";  
    else 
        cout<<"khong la so nguyen to";
    return 0;
}