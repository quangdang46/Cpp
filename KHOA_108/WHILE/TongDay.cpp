#include<iostream>
using namespace std;
int main(){
    int n,i=1,sum=0;
    cout<<"Nhap n: ";
    cin >> n;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"Tong cua day la: "<<sum<<endl;
}