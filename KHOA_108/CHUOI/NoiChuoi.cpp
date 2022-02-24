/*
Nối n ký tự đầu tiên của chuỗi s2 vào chuỗi s1
          strncat(char s1],char s2[],int n);
*/ 
#include<iostream>
#include<string.h>
using namespace std;
// int main(){
//     char str1[20],str2[20];
//     cout<<"nhap chuoi 1:"; gets(str1);
//     cout<<"\nhap chuoi 2:";gets(str2);
//     strcat(str1,str2);
//     cout<<"\nXuat chuoi sau khi noi:";
//     puts(str1);
// }
int main (){
    char str1[20];
    char str2[20];
    strcpy (str1,"To be ");
    strcpy (str2,"or not to be");
    strncat (str1,str2,6);
    puts(str1);
    return 0;
}