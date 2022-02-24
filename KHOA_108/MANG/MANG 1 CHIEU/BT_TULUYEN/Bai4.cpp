#include<iostream>
using namespace std;
void NhapMang( int arr[],int n){
    for(int i=0;i<n;i++){
        // do{
        //     cout <<"arr["<<i<<"]= ";
        //     cin >>arr[i];
        // }while(arr[i]>0);
        cout <<"arr["<<i<<"]= ";
        cin >>arr[i];
    }
}
void XuatMang(int arr[],int n){
    for(int i=0;i<n;i++){
        cout <<arr[i]<<' ';
    }
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
void Swap(int &x, int &y){
    int tmp=x;
    x=y;
    y=tmp;
}
void SapXep(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]%2==0){
                if(i==j){
                    continue;
                }else{
                    if(arr[j]%2==0 && arr[j]>arr[i]){
                        swap(arr[i],arr[j]);
                    }
                }
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
    SoNguyenTo(arr, n);
    cout<<endl;
    cout <<"Sap Xep so chan"<<endl;
    SapXep(arr, n);
    XuatMang(arr, n);
}