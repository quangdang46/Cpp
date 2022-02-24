// Viết chương trình nhập vào một dãy các số theo thứ tự tăng, nếu nhập sai quy cách thì yêu cầu nhập lại. In dãy số sau khi đã nhập xong.
#include<iostream>
#include<limits.h>
using namespace std;
void NhapMang( int arr[],int n){
    arr[0] =INT_MIN;
    for(int i=1;i<=n;i++){
        do{
            cout <<"arr["<<i<<"]= ";
            cin >>arr[i];
        }while(arr[i]<arr[i-1]);
    }
}
void XuatMang(int arr[],int n){
    for(int i=1;i<=n;i++){
        cout <<arr[i]<<' ';
    }
}
int main(){ 
    int n;
    int arr[100];
    cout<<"Nhap n: ";
    cin >> n;
    NhapMang(arr, n);
    XuatMang(arr, n);
}