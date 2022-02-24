/*
Câu 2: Viết hàm tạo tập văn ban có tên là “INPUT.TXT" có cấu trúc như sau
- Dòng đầu tiên ghi N (N là số nguyên dương nhập từ bàn phím)
 Trong các dòng tiếp theo ghi N số nguyên ngẫu nhiên trong phạm vi từ 0 đến 100, mỗi
dòng 10 số (các số cách nhau ít nhất một dấu cách)
- Hãy đọc dữ liệu của file “INPUT.TXT" và lưu vào mảng một chiều A
Hãy thực hiện các công việc sau :
a) Tìm giá trị lớn lớn nhất của mảng A
b) Đếm số lượng số chẳn, số lượng số lẽ của mảng A
c) Hãy sắp xếp các phần tử theo thứ tự tăng dần
Hãy ghi các kết quả trên vào
filetext có tên là "OUTPUT.TXT" thee mẫu sau:
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
void DocFile(int n){
    srand(time(NULL));
    FILE *f = fopen("INPUT.TXT","w");
    int x=n;
    char s[10];
    itoa(x,s,10);
    fputs(s,f);
    fputs("\n",f);
    int i=0;
    while(i<10){
        int tmp=rand()%101-1;
        itoa(tmp,s,10);
        fputs(s,f);
        fputs(" ",f);
        i++;
    }
    // printf("i=%d\n",i);
    int j=i;
    if(i==10){
        fputs("\n",f);
        while(i<n-j){
            int tmp=rand()%101-1;
            itoa(tmp,s,10);
            fputs(s,f);
            fputs(" ",f);
            i++;
        }
    }
    fclose(f);
}



int main(){
    int n;
    cout<<"Nhap n:";
    cin >> n;
    DocFile(n);
}
