/*
Hàm gets() đọc các ký tự từ bàn phím vào trong mảng trỏ đến
bởi s cho đến khi nhấn Enter. Ký tự null sẽ được đặt sau ký tự
cuối cùng của Chuỗi nhập vào trong mảng.
-Để xuất Chuỗi ra màn hình, ta dùng hàm puts():

*/
#include<iostream>
#include<string.h>
using namespace std;
// int main(){
//   char str[20];
//   cout<<"Nhap chuoi:";
//   gets(str);
//   cout<<"\nXuat chuoi:";
//   puts(str);
//   return 0;
// }
#define MAX 255
int main(){
    char str1[MAX];
    char *str2;
    cout<<"Nhap chuoi str1: ";
    gets(str1,19);
    // puts(str1);
    cout<<"Chuoi str1: "<<str1<<endl;
    cout<<"Do dai str1: "<<strlen(str1)<<endl;   
    //cin.getline (strl, MAX);
    str2 = new char[MAX];
    cout<<"Nhap chuoi str2: ";
    cin.getline(str2, MAX);
    cout<<"Chuoi str2: "<<str2<<endl;
    cout<<"Do dai str2: "<<strlen(str2)<<endl;  
    // puts(str2);
}