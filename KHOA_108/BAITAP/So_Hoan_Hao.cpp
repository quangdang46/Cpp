#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Nhap n: ";
    cin >> n;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<n<<" La so hoan hao";
    }else{
        cout<<n<<" Khong la so hoan hao";
    }
}