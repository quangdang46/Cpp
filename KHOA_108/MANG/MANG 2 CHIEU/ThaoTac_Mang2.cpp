/*
Viết chương trình nhập vào một mảng nguyên, hãy xuất ra màn hình:
- Phần tử lớn nhất của mảng.
- Phần tử nhỏ nhất của mảng.
- Tính tổng của các phần tử trong mảng.
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
void TimMax( int arr[][100],int m,int n){
    int max=arr[0][0];
    for(int i=0;i<m; i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout <<"Gia tri lon nhat trong mang: "<<max<<endl;
}
void TimMin( int arr[][100],int m,int n){
    int min=arr[0][0];
    for(int i=0;i<m; i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    cout <<"Gia tri nho nhat trong mang: "<<min<<endl;
}
void Sum( int arr[][100],int m,int n){
    int sum=0;
    for(int i=0;i<m; i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
    }
    cout <<"Tong cac phan tu cua mang: "<<sum<<endl;
}
int main(){
    int m,n;
    int arr[100][100];
    cout<<"Nhap m va n: ";
    cin >> m >> n;
    NhapMang(arr,m,n);
    XuatMang(arr,m,n);
    TimMax(arr,m,n);
    TimMin(arr,m,n);
    Sum(arr,m,n);
}