#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Nhap chieu cao: ";
    cin >> n;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if (j=i || i=n-1 || j==0){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
    }
}