#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Nhap a,b,c: ";
    cin >> a>>b>>c;
    if(a>0 &&b>0 &&c>0){
        if(a+b>c && a+c>b && b+c>a){
            if(a==b && b==c){
                cout<<"Tam giac deu";
            }else if(a==b||b==c || c==a){
                cout<<"Tam giac can";
            }else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
                cout<<"Tam giac vuong";
            }else{
                cout<<"Tam giac thuong";
            }
        }else{
            cout<<"Khong ton tai tam giac";
        }
    }else{
        cout<<"Khong ton tai tam giac";
    }
}