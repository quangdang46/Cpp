#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    FILE *file=fopen("dulieu.txt","r");
    char *s;
    do
    {
        char str[100];
        s=fgets(str,120, file);
        cout<<s;
        if(s==NULL)
            break;
    }
    while(true);
    fclose(file);
}