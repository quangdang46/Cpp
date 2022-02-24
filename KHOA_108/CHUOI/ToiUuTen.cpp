/*
Câu 2: Viết chương trình nhập vào họ và tên của một người, cắt bỏ
các khoảng trắng bên phải, trái và các khoảng trắng không có nghĩa
trong . In ra màn hình toàn bộ họ tên người đó dưới dạng chữ hoa,
chữ thường.
Ví dụ: “ ngUYEN Van TEO "Nguyen Van Teo"
*/ 

#include<iostream>
#include<string.h>
using namespace std;
char XoakhoangTrang(char *str){
    int j=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]!=' '){
            str[j++]=str[i];
        }else if(j>0 && str[i+1]!=' '){
            str[j++]=str[i];
        }
    }
    if(str[j-1]==' '){
        str[j-1]='\0';
    }else{
        str[j]='\0';
    }
}

char ChuanHoa(char *str){
    XoakhoangTrang(str);
    strlwr(str);
    for(int i=0;i<strlen(str);i++){
        if(i==0 && (int)str[0]>=97 && (int)str[i]<=122){
            str[0]=toupper(str[0]);
        }else if((int)str[i-1]==32 && (int)str[i]>=97 && (int)str[i]<=122){
            str[i]=toupper(str[i]);
        }
    }   
}
int main(){
    char* str =new char[20];
    // cout<<"Nhap ten: ";
    // gets(str);
    strcpy(str," ngUYEN   Van   TEO  ");
    // ngUYEN   Van   TEO  
    ChuanHoa(str);
    cout<<strlen(str)<<endl;
    delete[] str;
}