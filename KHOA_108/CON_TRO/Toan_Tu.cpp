#include<iostream>
using namespace std;
int main(){
    int count = 100;
    int *p=&count;
    cout<<"Gia tri cua bien count:"<<count<<endl;
    cout<<"Dia chi cua bien count:"<<&count<<endl;
    cout<<"Gia tri cua bien count:"<<*p<<endl;
    cout<<"Dia chi cua con tro:"<<p<<endl;
}