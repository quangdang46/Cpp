#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap gia tri n: ";
    cin >> n;
    cout<<n<<(n%2==0 ?"la so chan":"la so le");
}