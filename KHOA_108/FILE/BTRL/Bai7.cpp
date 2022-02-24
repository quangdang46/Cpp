/*
Viết chương trình quản lý Sách, thông tin của mỗi Sách gồm có: ISBN (chuỗi), TÊN
(Chuỗi), số trang(ső), tác giả(chuỗi)
Chương trình cho phép:
 - Nhập danh sách SÁCH
  Lưu /đọc danh sách vào file .
  Xuất danh sách SÁCH
    Tìm Sách theo tác giả
  Xuất Top 3 Sách có số trang nhiều nhất.
  Sắp xếp Sách theo số trang giảm dần
  Thoát phần mềm
*/

#include<iostream>
#include<stdio.h>
using namespace std;

struct Sach{
    char ISBN[100];
    char Name[100];
    int trang;
    char tacgia[100];
};

void Nhap(Sach &sach){
    cout<<"Nhap ISBN: ";
    cin >>sach.ISBN;
    cin.ignore();
    cout<<"Nhap Name: ";
    cin >>sach.Name;
    cin.ignore();
    cout<<"Nhap so trang: ";
    cin >>sach.trang;
    cin.ignore();
    cout<<"Nhap ten tac gia: ";
    cin >>sach.tacgia;   
}


void NhapN(Sach arr[],int n){
    for(int i=0;i< n; i++){
        cout<<"Nhap thong tin sach thu "<<i<<endl;
        Nhap(arr[i]);
    }
}

void Xuat(Sach sach){
    cout <<sach.ISBN<<" - "<<sach.Name<<" - "<<sach.trang<<" - "<<sach.tacgia<<endl;
}

void XuatN(Sach arr[],int n){
    for(int i = 0;i < n;i++){
        Xuat(arr[i]);
    }
}
void LuuFile(Sach arr[],int n){
    FILE* f=fopen("SACH.TXT","a");
    char s[100];
    for(int i=0; i<n; i++){
        fputs(arr[i].ISBN,f);
        fputs(" ",f);
        fputs(arr[i].Name,f);
        fputs(" ",f);
        itoa(arr[i].trang,s,10);
        fputs(s,f);
        fputs(" ",f);
        fputs(arr[i].tacgia,f);
        fputs("\n",f);
    }
    fclose(f);
}
void DocFile(){
    FILE* f=fopen("SACH.TXT","r");
    char line[100];
    while(!feof(f)){
        fgets(line,sizeof(line),f);
        cout<<line;
    }
    fclose(f);
}

void TimTacGIa(Sach arr[],int n){
    char x[100];
    cout<<"Nhap ten tac gia: ";
    cin>>x;
    for(int i=0;i< n; i++){
        if(strcmp(strlwr(arr[i].tacgia), strlwr(x))==0){
            Xuat(arr[i]);
        }
    }
}
// void TimSachTrangTop3(Sach arr[],int n){

// }

void SapXepSach(Sach arr[],int n){
    for(int i=0;i < n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i].trang<arr[j].trang){
                Sach tmp=arr[i];
                arr[i] = arr[j];
                arr[j]=tmp;
            }
        }
    }
    XuatN(arr,n);
}
int main(){
    // Sach arr[100];
    // int n=2;
    // NhapN(arr,n);
    // LuuFile(arr,n);
    DocFile();

}
