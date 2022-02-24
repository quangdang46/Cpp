#include<iostream>
using namespace std;
int main(){
    int *arr[10];
    for (int i=0; i<10; i++){
        //Cap phat bo nho
        arr[i] = new int;
        *arr[i]=i*2;
    }

    //Xuat mang
    for (int i=0; i<10; i++){
        cout<<arr[i]<<"=>"<<*arr[i]<<endl;
    }
}