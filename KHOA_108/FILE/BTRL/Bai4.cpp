/*
Câu 3:
Cho Cấu trúc Vật tư: Mã vật tư, tên vật tư, ngày tháng năm nhập kho. Viết chương trình
cho phép nhập xuất danh sách Vật tư vào File
*/
#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;
struct Ng{
    int ngay,thang,nam;
};
struct Vattu{
    Ng ngay;
    int ma;
    char ten[100]; 
};
void Nhap(Vattu &vt){
    cout << "Nhap ma: ";
    cin >>vt.ma;
    cin.ignore();
    cout<<"Nhap ten: ";
    cin>>vt.ten;
    cout << "Nhap ngay: ";
    cin >>vt.ngay.ngay;
    cout << "Nhap thang: ";
    cin >>vt.ngay.thang;
    cout << "Nhap nam: ";
    cin >>vt.ngay.nam;
}

void NhapDanhSach(Vattu dsvt[],int n){
    for(int i=0;i<n;i++){
        cout << "Nhap vat thu thu "<<i<<endl;
        Nhap(dsvt[i]);
    }
}

void Xuat(Vattu vt){
    cout<<vt.ma<<" - "<<vt.ten<<" - "<<vt.ngay.ngay<<"/"<<vt.ngay.thang<<"/"<<vt.ngay.nam<<endl;
}

void LuuFile(Vattu dsvt[],int n){
    ofstream outfile ("DANHSACHVATTU.TXT",ofstream::binary);
    for(int i=0; i<n; i++){
        Vattu vt=dsvt[i];
        outfile.write((char*)&vt, sizeof(Vattu));
    }
    outfile.close();
}

void DocFile(Vattu dsvt[],int &n){
    ifstream infile("DANHSACHVATTU.TXT",ofstream::binary);
    infile.seekg(0,infile.end);
    long size = infile.tellg();
    infile.seekg(0);
    n=size / sizeof(Vattu);
    for(int i=0; i<n; i++){
        Vattu vt;
        infile.read((char*)&vt,sizeof(Vattu));
    }
    infile.close();
}

void XuatDanhSach(Vattu dsvt[],int n){
    for(int i=0; i<n;i++){
        Xuat(dsvt[i]);
    }
}



int main(){
    // int n=2;
    Vattu dsvt[100];
    // NhapDanhSach(dsvt,n);
    // cout<<"________"<<endl;
    // XuatDanhSach(dsvt,n);
    // LuuFile(dsvt,n);
    int n;
    DocFile(dsvt,n);
    XuatDanhSach(dsvt,n);
}