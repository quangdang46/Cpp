#include<iostream>
#include<math.h>
using namespace std;
int  main(){
    float x,t;
    const float PI = 3.14;
    cout<<"Nhap vao do can doi: ";
    cin >> x;
    t=x*PI/180;
    cout<<"Sin("<<x<<") = "<<sin(t)<<endl;
    cout<<"Cos("<<x<<") = "<<cos(t)<<endl;
    cout<<"Tan("<<x<<") = "<<tan(t)<<endl;
    cout<<"Cot("<<x<<") = "<<(float)1/tan(t)<<endl;

}