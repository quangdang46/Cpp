#include <iostream>
using namespace std;
void Nhap(int* arr,int &n){
    for(int i=0; i<n; i++){
        do{
            cout<<"\n"<<"arr["<<i<<"]=";
            cin>>*(arr+i);
        }while(n>100||n<0);
    }
}
void XuatMang(int* arr,int n){
    for(int i=0; i<n; i++){
        cout<<"\n"<<"arr["<<i<<"]="<<*(arr+i);
    }   
}
void SapXep(int* arr,int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(*(arr+j)>*(arr+i)){
                int tmp=*(arr+j);
                *(arr+j)=*(arr+i);
                *(arr+i)=tmp;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Nhap so luong phan tu:"<<endl;
    cin >>n;
    int *arr=new int[n];
    Nhap(arr,n);
    SapXep(arr,n);
    XuatMang(arr,n);
    delete[] arr;
}