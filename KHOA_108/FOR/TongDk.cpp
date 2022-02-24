// Ví dụ: Nhập 1 số nguyên N, tính tổng từ 1→N, khi tổng >=9 thì dừng
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap gia tri n: ";
    cin >> n;
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
        if(sum>=9){
            break;
        }
    }
    cout<<"Tong cua day la:"<<sum<<endl;
}