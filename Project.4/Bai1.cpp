#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float x1,y1,x2,y2,khoangcach;
    cout<<" Nhap hoanh do A:"<<endl;
    cin>>x1;
    cout<<" Nhap tung do A:"<<endl;
    cin>>y1;
    cout<<"Nhap hoanh do B:"<<endl;
    cin>>x2;
    cout<< "Nhap tung do B:"<<endl;
    cin>>y2;
    khoangcach = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout << "Khoang cach 2 diem A va B la:"<< khoangcach;

        return 0;


}
