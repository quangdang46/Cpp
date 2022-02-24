// Ví dụ: Nhập N, Tính tổng 1→N ngoại trừ các số 2, 4
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap gia tri n: ";
    cin >> n;
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
        if(i==2 || i==4){
            continue;
        }
    }
    cout<<"Tong cua day la:"<<sum<<endl;
}