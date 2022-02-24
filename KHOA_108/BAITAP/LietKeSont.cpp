#include<iostream>
using namespace std;
int CheckSnt(int n){
    int dem=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            dem++;
        }
    }
    return dem;
}
int main(){
    int n;
    cout<<"Nhap n: ";
    cin >> n;
    for(int i=2; i<=n; i++){
        if(CheckSnt(i)==2){
            cout<<i<<" ";
        }
    }
}