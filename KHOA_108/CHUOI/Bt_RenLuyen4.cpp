/*
Viết chương trình nhập vào họ và tên của một người, cắt bỏ các
khoảng trống không cần thiết (nếu có), tách tên ra khỏi họ và tên,
in tên lên màn hình. Chú ý đến trường hợp cả họ và tên chỉ có một
từ.
*/ 
#include<iostream>
#include<string.h>
using namespace std;
char XoakhoangTrang(char *str){
    int j=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]!=' ')
            str[j++]=str[i];
        else if(j>0&&str[i+1]!=' ')
            str[j++]=str[i];
    }
    if(str[j-1]==' ')
        str[j-1]='\0';
    else
        str[j]='\0';
}

char *LayTen(char *str){
    int k=0;
    for (int i=strlen(str);i>=0;i--){
        if(str[i]==' '){
            k=i+1;
            break;
        }
    }
    char *strTen=new char[10];
    int i2=0;
    for(int i=k;i<strlen(str);i++){
        strTen[i2++]=str[i];
    }
    return strTen;
}
int main(int argc, char** argv) {
    char *str=new char[255];
    strcpy(str," Nguyen         Thi        Lung    Linh ");
    cout<<"Chuoi ban dau:"<<str<<endl;
    cout<<"Chieu dai="<<strlen(str)<<endl;
    XoakhoangTrang(str);
    cout<<"Chuoi sau khi xoa khoang trang: "<<str<<endl;
    cout<<"Chieu dai="<<strlen(str)<<endl;
    char *ten=LayTen(str);
    cout<<"Ten="<<ten<<endl;
    return 0;

}

