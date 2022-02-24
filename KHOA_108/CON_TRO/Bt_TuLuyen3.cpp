#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void Nhap(int** arr,int n){
    for(int i=0;i< n; i++){
        for(int j=0;j<n; j++){
            *(*(arr+i)+j)=rand()%101;
        }
    }
}
void XuatMang(int** arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n; j++){
            cout<<*(*(arr+i)+j)<<"\t";
        }
        cout<<endl;
    }
}
void XuatDuongCheoChinh(int** arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n; j++){
            if(i==j){
                cout<<*(*(arr+i)+j)<<" ";
            }
        }
    }
}
void XuatDuongCheoPhu(int** arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n; j++){
            if(i==n-j-1){
                cout<<*(*(arr+i)+j)<<" ";
            }
        }
    }
}
void SumMang(int** arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n; j++){
            sum+=*(*(arr+i)+j);
        }
    }
    cout <<sum<<endl;
}
int main(){
    srand(time(NULL));
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int** arr = new int*[n];
    for(int i = 0; i < n; i++){
        *(arr+i)=new int[n];
    }
    Nhap(arr,n);
    XuatMang(arr,n);
    cout <<"\n_________\n";
    XuatDuongCheoChinh(arr,n);
    cout <<"\n_________\n";
    XuatDuongCheoPhu(arr,n);
    cout <<"\n_________\n";
    SumMang(arr,n);
}