#include <iostream>
#include <math.h>
using namespace std;


float tinhkc(float x1,float y1,float x2,float y2){
    float khoangcach = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return khoangcach;
}

int main(){
    float x1,y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    cout << endl << "Khoang cach giua hai diem la: " << tinhkc(x1,y1,x2,y2);
    return 0;
}
