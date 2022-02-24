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
void SapXep( int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
}

// /////NO CAU B
int main(){ 
    int n;
    int a[100],b[100],c[200];
    cout<<"Nhap n: ";
    cin >> n;
    cout<<"Mang a:"<<endl;
    NhapMang(a, n);
    XuatMang(a, n);
    SapXep(a, n);
    cout <<"Mang b:"<<endl;
    NhapMang(b, n);
    XuatMang(b, n);
    SapXep(b, n);
}