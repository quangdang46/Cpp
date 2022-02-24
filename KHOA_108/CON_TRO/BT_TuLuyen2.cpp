#include<iostream>
#include<math.h>
using namespace std;
void NhapMang(int* arr,int n){
    for(int i=0; i< n;i++){
        cin>>*(arr+i);
    }
}
void TinhKhoang(int* a,int* b,int n){
    int sum = 0;
    for(int i=0; i< n; i++){
        sum+=pow(*(a+i)-*(b+i),2);
    }
    cout<<sqrt(sum)<<endl;
}
int main(){
    int n;
    cout<<"Nhap n: ";
    cin >> n;
    int* p=new int[n];
    int* q=new int[n];
    NhapMang(p,n);
    NhapMang(q,n);
    TinhKhoang(p,q,n);
}