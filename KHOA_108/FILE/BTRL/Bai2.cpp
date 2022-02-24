/*
Câu 1: Viết hàm tạo một tập chứa 10000 số nguyên ngẫu nhiên khác nhau
đôi một trong phạm vi từ 1 đến 32767 đặt tên là “SONGUYEN.INP" Viết
hàm đọc tập “SONGUYEN.INP", sau đó sắp xếp theo thứ tự tăng dần và lưu
kết quả vào tập “SONGUYEN.OUT"
*/
#include<string.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int arr[10000];
void LuuFile(){
    char s[11];
    srand(time(NULL));
    FILE* f=fopen("SONGUYEN.INP","w");
    for(int i=0; i<10000;i++){
        int n=rand()%32767+1;
        itoa(n,s,10);
        fputs(s,f);
        fputs("\n",f);
    }
    fclose(f);
}
void GanMang(int arr[],int n){
    char tmp[11];
    FILE* f=fopen("SONGUYEN.INP","r");
    for(int i=0; i<n; i++){
        fgets(tmp,sizeof(tmp),f);
        arr[i]=atoi(tmp);
    }
    fclose(f);
}

void SapXep(int arr[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n;j++){
            if(arr[j]<arr[i]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j]=tmp;
            }
        }
    }
}

void XuatFile(int arr[],int n){
    GanMang(arr,n);
    SapXep(arr,n);
    FILE* f=fopen("SONGUYEN.OUT","w");
    char s[11];
    for(int i=0; i<n; i++){
        itoa(arr[i],s,10);
        fputs(s,f);
        fputs("\n",f);
    }
    fclose(f);
}
int main(){
    int n=10000;
    LuuFile();
    XuatFile(arr,n);
}