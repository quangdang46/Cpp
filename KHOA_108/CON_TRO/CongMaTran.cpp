#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void CapPhat(int** arr,int n){
    for(int i=0;i< n; i++){
        *(arr+i) = new int[n];
    }
}
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
            cout<<*(*(arr+i)+j)<<"\t\t";
        }
        cout<<endl;
    }
}
void CongMaTran(int** a,int** b,int** c,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n; j++){
            *(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
        }
    }
}
int main(){
    srand(time(NULL));
    int n;
    cout<<"Nhap n";
    cin >> n;
    int** a = new int*[n];
    CapPhat(a,n);
    int** b = new int*[n];
    CapPhat(b,n);
    int **c = new int*[n];
    CapPhat(c,n);
    Nhap(a,n);
    Nhap(b,n);
    cout <<"Mang a"<<endl;
    XuatMang(a,n);
    cout<<"Mang b"<<endl;
    XuatMang(b,n);
    CongMaTran(a,b,c,n);
    cout<<"Mang c"<<endl;
    XuatMang(c,n);

}