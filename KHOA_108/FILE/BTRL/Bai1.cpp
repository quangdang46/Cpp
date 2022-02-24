/*
Cho Sinh viên có cấu trúc: mã (int), tên(char *), đtb(double)
Viết các hàm dùng con trỏ:
 Nhập 1 sinh viên
 Nhập nhiều Sinh viên
 Xuất 1 sinh viên
 Xuất nhiều sinh viên
 Lưu danh sách sinh viên vào file
- Đọc danh sách sinh viên từ file
*/

#include<iostream>
#include<string.h>
#include<stdio.h>
#include<fstream>
using namespace std;
struct SinhVien{
    int ma;
    char ten[255];
    double dtb;
};

SinhVien* NhapSinhVien(){
    SinhVien* sv = new SinhVien;
    cout<<"Nhap ma sinh vien:";
    cin>>sv->ma;
    cin.ignore();
    cout<<"Nhap ten sinh vien:";
    cin>>sv->ten;
    cout<<"Nhap diem trung binh:";
    cin>>sv->dtb;
    return sv;
}

void NhapDanhSachSinhVien(SinhVien **&dsSV,int siso){
    for(int i=0;i<siso; i++){
        cout<<"Nhap thong tin sinh vien thu "<<i<<endl;
        SinhVien *sv=NhapSinhVien();
        *(dsSV+i) = sv;
    }
}
void XuatSinhVien(SinhVien *sv){
    cout<<sv->ma<<"\t"<<sv->ten<<"\t"<<sv->dtb<<endl;
}

void XuatDanhSach(SinhVien **dsSV,int siso){
    for(int i=0;i<siso; i++){
        SinhVien *sv=*(dsSV+i);
        XuatSinhVien(sv);
    }
}

void LuuFile(SinhVien **dsSV,int siso){
    ofstream outfile("csdlsv.txt",ofstream::binary);
    for(int i=0;i< siso; i++){
        SinhVien *sv=*(dsSV+i);
        outfile.write((char*)sv, sizeof(SinhVien));
    }
    outfile.close();
}
void DocFile(SinhVien **dsSV,int &siso){
    ifstream infile("csdlsv.txt",ifstream::binary);
    infile.seekg(0,infile.end);
    long size=infile.tellg();
    infile.seekg(0);
    siso=size/sizeof(SinhVien);
    dsSV=new SinhVien*[siso];
    for(int i=0;i<siso; i++){
        SinhVien *sv=new SinhVien;
        infile.read((char*)sv, sizeof(SinhVien));
        *(dsSV+i) =sv;
    }
    infile.close();
}
int main(){
    // int siso=3;
    // SinhVien **dsSV=new SinhVien*[siso];
    // NhapDanhSachSinhVien(dsSV,siso);
    // XuatDanhSach(dsSV,siso);
    // LuuFile(dsSV,siso);
    int siso;
    SinhVien **dsSV=NULL;
    DocFile(dsSV,siso);
    XuatDanhSach(dsSV,siso);

}