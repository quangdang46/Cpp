#include<iostream>
using namespace std;
void HoanVi(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
int main(){
    int a,b;
    cout<<"Nhap a va b:"<<endl;
    cin >> a >>b;
    cout<<"a va b truoc:"<<a<<b<<endl;
    HoanVi(&a,&b);
    cout<<"a va b Sau"<<a<<b<<endl;
}