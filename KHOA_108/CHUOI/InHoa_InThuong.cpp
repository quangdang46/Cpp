#include<iostream>
#include<string.h>
using namespace std;
/*
-Chuyên ký tự thường sang ký tự hoa
    toupper( int ch );
-Chuyển ký tự hoa sang ký tự thường
    tolower( int ch );
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char str1[]="OBAMA hahaha ali33";
    int n1=strlen(str1);
    for(int i=0;i<n1;i++){
        putchar(toupper(str1[i]));
    }
    cout << "_______\n";
    char str2[]="OBAMA HAHAHA ALI33";
    int n2=strlen(str2);
    for(int i=0;i<n2;i++){
        putchar(tolower(str2[i]));
    }
}