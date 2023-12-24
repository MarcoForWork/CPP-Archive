#include <iostream>
#include <string>
using namespace std;
string check;
int main()
{
   int num, reverse_num=0, remainder,temp;
   cin>>num;
   temp=num;
   while(temp!=0)
   {
      remainder=temp%10;
      reverse_num=reverse_num*10+remainder;
      temp/=10;
   } 
    check = (num == reverse_num) ? "true" : "false";
    cout << check;
    return 0;
}   