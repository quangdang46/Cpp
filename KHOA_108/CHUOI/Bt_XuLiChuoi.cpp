/*
[{“SV1;Obama;male"},
{"SV2; Yanjmaa;female"},
{"SV3;Trump;male"},
{“SV4;Putin;male"},
{“SV5;Pereira;female"}
]
*/ 
/*
-Khai báo con trỏ cấp 2 để lưu danh
sách 5 Sinh viên minh họa bên
-Xuất danh sách 5 Sinh viên theo 3 cột:
mã, tên, giới tính
-Đếm bao nhiêu Nữ bao nhiêu Nam
*/ 
//
#include<iostream>
#include<string.h>
using namespace std;
bool HoiNamHayNu(char *str){
    int j=0;
    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]==';'){
            j=i;
            break;
        }
    }
    char strGioiTinh[5];
    int i2=0;
    for(int i=j+1;i<strlen(str);i++){
        strGioiTinh[i2]=str[i];
    }
    for (int i=j+1;i<strlen(str);i++){
        strGioiTinh[i2]=str[i];
        i2++;
    }
    strGioiTinh[i2]='\0';
    if(strcmp(strGioiTinh,"male")==0)
        return true;
    return false;
}

int main(){
    int nam=0,nu=0;
    char** str=new char*[5];
    for(int i=0;i<5; i++){
        *(str+i)=new char[30];
    }
    strcpy(*(str+0),"SV1;Obama;male");
    strcpy(*(str+1),"SV2; Yanjmaa;female");
    strcpy(*(str+2),"SV3;Trump;male");
    strcpy(*(str+3),"SV4;Putin;male");
    strcpy(*(str+4),"SV5;Pereira;female");
    for(int i=0;i<5;i++){
        if(HoiNamHayNu(*(str+i))){
            nam++;
        }else{
            nu++;
        }
    }
    cout<<"Nam "<<nam<<endl;
    cout<<"nu "<<nu<<endl;
}