/*
- Khai báo mảng
- Nhập dữ liệu
- Xuất dữ liệu toàn bộ
- Xuất theo dòng
- Xuất theo cột
- Nếu là ma trận vuông thì: Xuất chéo chính/chéo phụ
*/
#include<iostream>
using namespace std;
void NhapMang( int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout <<"arr["<<i<<"]["<<j<<"]= ";
            cin >>arr[i][j];
        }
    }
}
void XuatMang(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout <<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void XuatDong( int arr[][100],int n,int h){
    for(int i=0;i< n; i++){
        cout<<arr[h][i]<<" ";
    }
}
void XuatCot( int arr[][100],int m,int k){
    for(int i=0;i<m;i++){
        cout <<arr[i][k]<<" ";
    }
}
void XuatCheoChinh( int arr[][100],int m){
    for(int i=0;i<m; i++){
        cout<<arr[i][i]<<" ";
    }
}
void XuatCheoPhu( int arr[][100],int m){
    for(int i=0;i<m; i++){
        cout <<arr[i][m-i-1]<<" ";
    }
}
int main(){
    int m,n;
    int arr[100][100];
    cout<<"Nhap m va n: ";
    cin >> m >> n;
    NhapMang(arr,m,n);
    XuatMang(arr,m,n);
    int h,k;
    cout<<"Nhap dong can xuat: ";
    cin >>h;
    cout<<"Ket qua xuat dong!"<<endl;
    XuatDong(arr,n,h);
    cout<<"Ket qua xuat cot!"<<endl;
    cout<<"Nhap cot can xuat: ";
    cin >>k;
    XuatCot(arr,m,k);
    if(m==n){
        cout<<"Xuat cheo chinh"<<endl;
        XuatCheoChinh(arr,m);
        cout<<"Xuat cheo phu"<<endl;
        XuatCheoPhu(arr,m);
    }
}