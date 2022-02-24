#include<iostream>
using namespace std;
int main(){
    int n,dem=0;
    cout<<"Nhap n: ";
    cin >> n;
    int a=n;
    while(n>0){
        dem=dem*10+n%10;
        n/=10;
    }
    cout<<"So dao nguoc cua "<<a<<" la "<<dem<<"";
}