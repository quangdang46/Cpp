/*

Khai báo:
DataType * PointerVariable;
Cấp phát:
Pointer Variable = new DataType;
Hủy bộ nhớ:
delete PointerVariabļe ;
*/ 
#include<iostream>
using namespace std;
int main(){
    int *p;
    p= new int;
    *p=100;
    cout<<p<<endl;
    cout<<*p<<endl;
}