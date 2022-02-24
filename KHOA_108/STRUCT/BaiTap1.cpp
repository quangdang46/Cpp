#include<iostream>
#include<math.h>
using namespace std;

struct point{
    int x,y;
};
void Nhap(point arr[],int n){
    for(int i=0;i<n; i++){
        cout<<"Nhap x: ";cin>>arr[i].x;
        cout<<"Nhap y: ";cin>>arr[i].y;
    }
}
void Xuat(point arr[],int n){
    for(int i=0;i<n; i++){
        cout<<"("<<arr[i].x<<","<<arr[i].y<<")"<<endl;
    }
}
void Khoang(point arr[],int n){
    int sum = 0;
    for(int i=0;i<n-1; i++){
        for(int j=i+1;j<n;j++){
            int res =sqrt(pow(arr[i].x-arr[j].x,2)+pow(arr[i].y-arr[j].y,2)); 
            sum+=res;
            cout<<"("<<arr[i].x<<","<<arr[i].y<<") , ("<<arr[j].x<<","<<arr[j].y<<")==>"<<res<<endl;
        }
    }
    cout <<"Sum="<<sum<<endl;
}
int main(){
    point arr[100];
    int n;
    cout <<"Nhap n: ";
    cin >> n;
    Nhap(arr,n);
    Xuat(arr,n);
    cout<<"_________"<<endl;
    Khoang(arr,n);
}
