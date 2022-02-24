#include<iostream>
using namespace std;
void NhapMang( int arr[],int n){
    for(int i=0;i<n;i++){
        cout <<"arr["<<i<<"]= ";
        cin >>arr[i];
    }
}
void XuatMang(int arr[],int n){
    for(int i=0;i<n;i++){
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
