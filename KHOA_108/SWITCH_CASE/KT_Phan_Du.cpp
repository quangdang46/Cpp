/*
Ví dụ: Nhập vào một số nguyên, chia số nguyên này cho 2 lấy phần dư. Kiểm tra nếu phần dư bằng 0 thì
in ra thông báo "là số chẵn", nếu số dư bằng 1 thì in thông báo "là số lẽ".
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "CT KIEM TRA CHAN - LE PHAN DU"<< endl;
    cout<<"Nhap gia tri n: ";
    cin >> n;
    int du=n%2;
    switch(du){
        case 0:{
            cout<<n<<" co phan du la so chan";
            break;
        }
        case 1:{
            cout<<n<<" co phan du la so le";
            break;
        }
        default:{
            cout<<"Ban nhap sai gia tri";
        }
    }
    /*
    if(du==1){
        cout<<n<<"co phan du la so le";
    }else{
        cout<<n<<" co phan du la so chan";
    }
    */

}