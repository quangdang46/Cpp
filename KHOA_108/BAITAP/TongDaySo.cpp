#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,x;
    cout<<"Nhap n va x: ";
    cin >> n >>x;
    float sum = 0;
    int a=0;
    for(int i=1; i<=n; i++){
        a+=i;
        sum+=pow(x,i)/a;
    }
    cout<<sum<<endl;
}