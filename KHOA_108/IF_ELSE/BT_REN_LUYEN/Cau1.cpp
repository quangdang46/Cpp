#include<iostream>
using namespace std;
int Max2So(int x, int y){
    return x>y?x:y;
}
int main(){
    int a,b,c;
    cout<<"Nhap a b c: ";
    cin >> a>>b>>c;
    cout<<"Max 3 so a b c la: "<<Max2So(Max2So(a,b),c);
}