#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap n: ";
    cin >> n;
    if (n>0){
        cout<<n<<" la so duong";
    }else if(n==0){
        cout<<n<<" la so O";
    }else{
        cout<<n<<" la so am";
    }
}