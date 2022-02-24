#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
void Tinh(int* arr,int x,int n){
    int sum = 0;
    for(int i=0;i<=n; i++){
        sum+=pow(x,n)*(*(arr+n-i));
    }
    cout<<sum<<endl;
}
int main(){
    srand(time(NULL));
    int n,x;
    cout << "Nhap n va x: ";
    cin >> n>> x;
    int *arr = new int[n];
    for(int i = 0; i <= n; i++){
        *(arr+i)=rand()%101;
    }
    Tinh(arr,x,n);
}