#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Nhap n: ";
    cin >> n;
    while(n!=0){
        sum=sum*10+n%10;
        n/=10;
    }
    cout<<sum<<endl;
}