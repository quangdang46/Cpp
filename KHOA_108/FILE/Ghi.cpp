#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char** argv){
   FILE *file=fopen("dulieu.txt","w");
   fputs("sv1;Nguyen Van Co;22\n", file);
   fputs("sv2;Tran Thi Tam;21\n", file);
   fputs("sv3;Ho Van Huyet;23\n", file);
   fclose(file);
   return 0;
}