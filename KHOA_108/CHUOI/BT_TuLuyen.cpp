/*
Viết chương trình nhập một chuỗi ký tự từ bàn phím, xuất ra màn
hình mã ASCII của từng ký tự vừa nhập vào (gợi ý mỗi ký tự trên
một dòng).
*/ 
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char *str=new char[20];
    cout<<"Nhap chuoi ki tu: ";
    gets(str);
    for(int i=0; i<strlen(str);i++){
        cout<<(int)*(str+i)<<endl;
    }
}