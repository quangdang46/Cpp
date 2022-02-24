#include<iostream>
using namespace std;
void DoiSo(int n){
    switch(n){
        case 10: cout<< "A";break;
        case 11: cout<< "B";break;
        case 12: cout<< "C";break;
        case 13: cout<< "D";break;
        case 14: cout<< "E";break;
        case 15: cout<< "F";break;
    }
}
int main(){
    int n;
    int arr[10];
    cout<<"Nhap so can chuyen doi 10->16: ";
    cin >> n;
    int i=0;
    while(n>0){
        arr[i]=n%16;
        n=n/16;
        i++;
    }
    for(int j=i;j>=0;j--){
        if(arr[j]>=0 && arr[j]<=9){
            cout<<arr[j];       
        }else{
            DoiSo(arr[j]);
        }
    }
}