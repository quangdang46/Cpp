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
int main(){
    int m,n;
    int arr[100][100];
    cout<<"Nhap m va n: ";
    cin >> m >> n;
    NhapMang(arr,m,n);
    XuatMang(arr,m,n);
}