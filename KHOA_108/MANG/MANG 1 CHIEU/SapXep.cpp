// Sap xep tang dan
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
void SapXep(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
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
    cout <<endl;
    SapXep(arr, n);
    cout <<"Mang sau khi sap xep!"<<endl;
    XuatMang(arr, n);
}