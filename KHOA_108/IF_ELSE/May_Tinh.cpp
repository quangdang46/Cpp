#include<iostream>
using namespace std;
int main(){
    int a,b;
    char luachon;
    cout<<"Nhap a va b: ";
    cin >> a >> b;
    cout<<"Nhap phep tinh muon tinh(+,-,*,/): ";
    cin >> luachon;
    switch(luachon){
        case '+':{
            cout<<"Tong a va b: "<<a+b;
            break;
        }
        case '-':{
            cout<<"Hieu a va b: "<<a-b;
            break;
        }
        case '*':{
            cout<<"Tich a va b: "<<a*b;
            break;
        }
        case '/':{
            if(b==0){
                cout<<"Khong the thuc hien";
            }else{
                cout<<a<<"/"<<b<<"="<<(float)a/b;
            }
            break;
        }
        default:{
            cout<<"Khong co phep tinh!";
        }
    }
}