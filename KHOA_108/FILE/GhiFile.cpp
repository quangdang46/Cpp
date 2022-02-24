#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    FILE *file=fopen("SinhVien.txt","w++");
    fputs("Sinhvien1;TranThiTun;4/6/2003\n",file);
    fputs("Sinhvien2;TranQuangBa;12/11/2000\n",file);
    fputs("Sinhvien3;DangThiTong;12/12/2002\n",file);
    fputs("Sinhvien4;VoLeNguyenHong;12/4/2003\n",file);
    fclose(file);
}