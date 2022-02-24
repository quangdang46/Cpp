#include<iostream>
#include<string.h>
using namespace std;
/*
• *So sánh 2 chuỗi s1 và s2 theo nguyên tắc thứ tự từ điển. Phân
biệt chữ hoa và thường.Trả về :
    • 0: nếu s1 bằng s2.
    >0: nếu s1 lớn hơn s2.
    • <0: nếu s1 nhỏ hơn s2.
    strcmp(char s1[],char s2[]);
*/ 
int main(){
    char *sl="a";
    char *s2="a";
    int ret=strcmp (sl,s2);
    if(ret==0){
        cout<<"2 thang do bang nhau\n";
    }else if (ret>0){
        cout<<"thang 1>thang 2\n";
    }else if (ret<-1){
        cout<<"thang 1<thang 2\n";
    }
    return 0;
}
/*
int strncmp(const char *str1, const char *str2, size_t n)
so sanh n ki tu dau tien
    •str1 – This is the first string to be compared.
    •str2 – This is the second string to be compared.
    •n - The maximum number of characters to be compared.
    0: nếu str1 bằng str2.
    >0: nếu str1 lớn hơn str2.
    <0: nếu str1 nhỏ hơn str2.
*/
int main(){
    char str1[15];
    char str2[15];
    int ret;
    strcpy(str1, "abcdef");
    strcpy(str2, "ABCDEF");
    ret = strncmp(str1, str2, 4);
    if(ret < 0){
    printf("str1 is less than str2");
    }else if(ret > 0){
    printf("str2 is less than str1");
    }else{
    printf("str1 is equal to str2");
    }
}