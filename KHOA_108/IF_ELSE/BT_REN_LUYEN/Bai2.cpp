#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap thang: ";
    cin >> n;
    switch(n){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:{
            cout<<"Thang co 31 ngay";
            break;
        }
        case 4:
        case 6:
        case 9:
        case 11:{
            cout<<"Thang co 30 ngay";
            break;
        }
        case 2:{
            int nam;
            cout<<"Nhap nam: ";
            cin >> nam;
            if((nam%4==0 && nam%100!=0) || nam%400==0){
                cout<<nam<<" la nam nhuan";
            }else{
                cout<<nam<<" Khong phai nam nhuan";
            }
            break;
        }
        default:{
            cout<<"Nhap loi vui long nhap lai";
        }
    }
}