#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,x,a;
    cout<<"Nhap n va x: ";
    cin >> n >> x;
    a=pow(x*x+x+1,n)+pow(x*x-x+1,n);
    cout<<"Gia tri bieu thuc la:"<<a<<"";
}