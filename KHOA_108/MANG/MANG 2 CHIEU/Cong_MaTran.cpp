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
void Cong( int a[][100],int m,int n,int b[][100],int c[][100]){
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j] = a[i][j]+b[i][j];
        }
    }
}
int main(){
    int m,n;
    int a[100][100],b[100][100],c[100][100];
    cout<<"Nhap m va n: ";
    cin >> m >> n;
    cout <<"Ma tran a!"<<endl;
    NhapMang(a,m,n);
    XuatMang(a,m,n);
    cout <<"Ma tran b!"<<endl;
    NhapMang(b,m,n);
    XuatMang(b,m,n);
    cout <<"Ma tran c!"<<endl;
    XuatMang(c,m,n);
}