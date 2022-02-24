#include<iostream>
#include<math.h>
using namespace std;
const float PI=3.14;
int main(){
    float r,dt,cv;
    cout<<"Nhap va ban kinh R= ";
    cin >> r;
    cv=2*PI*r;
    dt=PI*pow(r,2);
    cout<<"Dien tich S= "<<dt<<endl;
    cout<<"Chu vi la P= "<<cv<<endl;
    
}