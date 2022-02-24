/*
Viết chương trình nhập vào một số bất kỳ, mỗi lần nhập thì lưu
vào file theo từng dòng
Đọc file và xuất ra:
Dòng 1: Các số chẵn
Dòng 2: Các số lẻ
Dòng 3: Các số âm
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void docfile(){
    
}
int main(){
    int arr[100];
    int n;
    char str[10];
    int res=0;
    FILE *f = fopen("csdl.txt","a");
    while(true){
        res++;
        cin >>n;
        itoa(n,str,10);
        fputs(str,f);
        fputs("\n",f);
        if(res==10) break;
    }
    fclose(f);
}