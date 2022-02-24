/*
Viết chương trình nhập vào một mảng số tự nhiên. Hãy xuất ra màn hình:
- Dòng 1: Xuất toàn bộ mảng
- Dòng 2 : gồm các số lẻ, tổng cộng có bao nhiêu số lẻ.
- Dòng 3: gồm các số chẳn, tổng cộng có bao nhiêu số chẵn.
- Dòng 4 : Gồm các số nguyên tố.
*/ 
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
void SoLeMang(int arr[],int n){
    int dem=0;
    cout <<"so le mang!"<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            dem++;
            cout <<arr[i]<<' ';
        }
    }
    cout <<endl;
    cout <<"Co "<<dem<<" so le trong mang!"<<endl;
}
void SoChanMang(int arr[],int n){
    int dem=0;
    cout<<"so chan mang!"<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            dem++;
            cout <<arr[i]<<' ';
        }
    }
    cout <<endl;
    cout <<"Co "<<dem<<" so chan trong mang!"<<endl;
}
bool Check(int n){
    bool Check=true;
    for(int i=2;i<n; i++){
        if(n%i==0){
            Check=false;
        }
    }
    return Check;
}
void SoNguyenTo(int arr[],int n){
    cout <<"so nguyen to trong mang!"<<endl;
    for(int i=0;i<n;i++){
        if(Check(arr[i])&&arr[i]!=1){
            cout <<arr[i]<<' ';
        }
    }
}
int main(){ 
    int n;
    int arr[100];
    cout<<"Nhap n: ";
    cin >> n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    SoChanMang(arr, n);
    cout<<endl;
    SoLeMang(arr, n);
    cout <<endl;
    SoNguyenTo(arr, n);
}