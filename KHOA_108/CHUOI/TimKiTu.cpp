/*
strchr(s1,ch) : Trả về con trỏ đến vị trí xuất hiện đầu tiên của ký tự ch
trong Chuỗi s1
*/ 

#include<iostream>
#include<string.h>
using namespace std;
// int main(){
//     char *p, h, str1[20];
//     cout<<"nhap chuoi 1:"; gets(str1);
//     cout<<"Nhap ktu muon tim:"; cin>>h;
//     p= strchr(str1,h);
//     if(p==NULL) cout<<"Khong tim thay ";
//     else cout<<"Tim thay tai vi tri "<<(p-str1);
// }
/*
strstr(s1, s2): Trả về
Chuỗi s2 trong sl.con trỏ đến vị trí xuất hiện đầu tiên của
*/
int main(){
    char *p, str1[20], str2[20];
    cout<<"nhap chuoi 1:"; gets(str1);
    cout<<"nhap chuoi 2:"; gets(str2);
    p= strstr(str1,str2);
    if(p==NULL)
        cout<<"Khong tim thay ";
    else
        cout<<"Tim thay tai vi tri "<<(p-str1);
}