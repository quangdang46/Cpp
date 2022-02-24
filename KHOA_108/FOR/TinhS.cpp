#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,n;
    cout<<"Nhap x va n: ";
    cin >> x >> n;
    int a=1;
    float sum=0;
    for(int i=1;i<=n; i++){
        a*=i;
        sum+=pow(x,i)/a;
    }
    cout<<sum;
}