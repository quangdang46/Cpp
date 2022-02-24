#include<iostream>
#include<math.h>
using namespace std;
int Gt(int n){
    int tich=1;
    for(int i=1; i<=n; i++){
        tich*=i;
    }
    return tich;
}
int main(){
    int n,x;
    float sum=0;
    cout<<"Nhap n va x: ";
    cin>>n>>x;
    for(int i=1; i<=n; i++){
        sum+=pow(x,2*i+1)/Gt(2*i+1);
    }
    cout<<sum<<endl;
}