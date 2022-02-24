#include<iostream>
using namespace std;
void H10TO2(int n){
    if(n>0){
        int t=n%2;
        H10TO2(n/2);
        cout<<t;
    }
}
int main(){
    int n;
    cout<<"Nhap n: ";
    cin >> n;
    H10TO2(n);
}