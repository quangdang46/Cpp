#include<iostream>
using namespace std;
void Nhap(int* arr, int n){
    for(int i=0; i< n; i++){
        cout <<"arr["<<i<<"]=";
        cin >>*(arr+i);
    }
}
void XuatMang(int* arr, int n){
    for(int i=0; i< n; i++){
        cout<<*(arr+i)<<"\t";
    }
}
void Swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void SapXep(int* arr, int n){
    for(int i=0; i< n-1; i++){
        for(int j=i+1; j< n; j++){
            if(*(arr+j)>*(arr+i)){
                Swap(&(*(arr+j)),&(*(arr+i)));
            }
        }
    }
}
void TimMax3(int* arr,int* p, int n){
    n=n>3?3:n;
    p=new int[n];
    SapXep(arr,n);
    for(int i=0; i<n; i++){
        *(p+i)=*(arr+i);
    }
    cout <<"Mang can tim:"<<endl;
    for(int i=0; i<n; i++){
        cout <<*(p+i)<<" ";
    }
}
int main(){
    int n;
    int* p;
    cout <<"Nhap n";
    cin >> n;
    int *arr=new int[n];
    Nhap(arr,n);
    XuatMang(arr,n);
    TimMax3(arr,p,n);
}