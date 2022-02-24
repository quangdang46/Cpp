// Viết chương trình để chuyển đổi vị trí từ dòng thành cột của một ma trận cấp m*n.
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
void ChuyenVi( int arr[][100],int m,int n,int b[][100]){
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[i][j] = arr[j][i];
        }
    }
}
int main(){
    int m,n;
    int arr[100][100],b[100][100];
    cout<<"Nhap m va n: ";
    cin >> m >> n;
    NhapMang(arr,m,n);
    XuatMang(arr,m,n);
    ChuyenVi(arr,m,n,b);
    cout <<"Sau khi chuyen vi!"<<endl;
    XuatMang(b,m,n);
}
