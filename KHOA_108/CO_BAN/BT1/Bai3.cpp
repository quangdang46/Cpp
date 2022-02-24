#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c,d;
    float ab;
    cout<<"Nhap toa do diem A(xa,ya): ";
    cin>>a>>b;
    cout<<"Nhap toa diem B(xb,yb): ";
    cin>>c>>d;
    ab=sqrt(pow(a-c,2)+pow(c-d,2));
    cout<<"Do dai AB= "<<ab<<endl;
}