#include<iostream>
#include<stdio.h>
using namespace std;
char str[100];
int main(){
    FILE *file = fopen("SinhVien.txt", "r");
    while(!feof(file)){
        fgets(str,sizeof(str), file);
        printf("%s", str);
    }
    fclose(file);
}