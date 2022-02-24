/*
Câu 1: Viết chương trình nhập một chuỗi ký tự và kiểm tra xem
chuỗi đó có đối xứng không.
Ví dụ : ABCDEDCBA là đối xứng.
*/ 
#include<iostream>
#include<string.h>
using namespace std;
bool KiemTra(char* str){
    int a=0,b=strlen(str)-1;
    while(a<b){
        if(*(str+a)!=*(str+b)){
            return false;
        }
        a++;
        b--;
    }
    return true;
}
int main(){
    char* str =new char[20];
    cout<<"Nhap chuoi: ";
    gets(str);
    if(KiemTra(str)){
        cout<<"Doi xung";
    }else{
        cout<<"Khong doi xung";
    }
}