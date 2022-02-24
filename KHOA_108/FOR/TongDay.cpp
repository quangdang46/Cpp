#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Nhap n: ";
    cin>>n;
    for(int i=1;i<=n; i++){
        sum+=i;
    }
    cout<<"Tong cua day la: "<<sum<<endl;
}