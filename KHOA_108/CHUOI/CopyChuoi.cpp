/*
Để sử dụng các hàm này, ta phải khai báo dòng lệnh sau:
        #include <string.h>
Sao chép nội dung chuỗi nguồn vào chuỗi đích, nội dung của
chuỗi đích sẽ bị xóa.
        strcpy(char *đích, char *nguồn);
*/ 
/*
-Chép n ký tự từ chuỗi nguồn sang chuỗi đích. Nếu chiều
dài nguồn < n thì hàm sẽ điền khoảng trắng cho đủ n ký
tự vào đích.
       strncpy(char *đích, char *nguồn, int n);

*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[20],str2[20];
    cout<<"nhap chuoi 1:";gets(str1);
    cout<<"nhap chuoi 2:";gets(str2);
    cout<<"\nXuat chuoi 1";puts(str1);
    cout<<"\nXuat chuoi 2:";puts(str2);
    cout<<"_____";
    // strcpy(str2,str1);
    strncpy(str2,str1,4);
    cout<<"\nXuat chuoi 2:";puts(str2);
    cout<<strlen(str2);
}