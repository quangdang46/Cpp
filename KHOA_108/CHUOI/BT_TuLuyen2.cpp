/*
Viết chương trình nhập một chuỗi ký tự từ bàn phím, xuất ra màn
hình đảo ngược của chuỗi đó. Ví dụ đảo của “abcd egh" là “hge
dcba".
*/ 
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char* str=new char[20];
    cout<<"Nhap chuoi can dao nguoc: ";
    gets(str);
    // char dao[]="";
    // char tmp[]="";
    for(int i=strlen(str);i>=0;i--){
        // char c=str[i];
        // strcpy(tmp,c);
        cout<<*(str+i);
    }
}