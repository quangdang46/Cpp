// Với K là 1 số nhập từ bàn phím. Kiểm tra xem K có mặt trong mảng hay không
// Với K là 1 số nhập từ bàn phím. Kiểm tra xem Kxuất hiện bao nhiêu lần trong mảng

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
void FindNumber( int arr[],int n,int k){
    int dem=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            dem++;
        }
    }
    if(dem==0){
        cout <<"Khong tim thay phan tu!";
    }else{
        cout <<"Tim thay "<<k<<" xuat hien "<<dem<<" lan";
    }
}
int main(){ 
    int n;
    int arr[100];
    cout<<"Nhap n: ";
    cin >> n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    cout<<endl;
    cout<<"_______"<<endl;
    int k;
    cout<<"Nhap so can tim: ";
    cin>>k;    
    FindNumber(arr,n,k);
}
