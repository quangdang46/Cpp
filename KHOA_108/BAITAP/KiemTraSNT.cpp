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
    if(CheckSnt(n)==2){
        cout<<n<<" La so nguyen to";
    }else{
        cout<<n<<" Khong la so nguyen to";
    }
}