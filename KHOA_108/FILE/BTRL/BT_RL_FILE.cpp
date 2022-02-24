/*
Cho Sản phẩm có cấu trúc: Mã (int), tên(char []), đơn giá(int)
Dùng mảng để nhập xuất dạnh sách sản phẩm
Lưu và đọc sản phẩm từ file
*/

#include<iostream>
#include<fstream>
using namespace std;

struct sp{
    int ma,dongia;
    char ten[100];
};

void NhapSanPham(sp &sanpham){
    cout << "Nhap ma san pham: ";cin >> sanpham.ma;
    cout << "Nhap don gia san pham: ";cin>>sanpham.dongia;
    cin.ignore();
    cout<< "Nhap ten san pham: ";
    // getline(cin,sanpham.ten);
    cin>>sanpham.ten;
}
void NhapDanhSach(sp dssp[],int n){
    // cout << "Nhap so luong can nhap";cin >>*n;
    for(int i=0; i<n;i++){
        cout << "Nhap san pham thu: "<<i+1<<endl;
        NhapSanPham(dssp[i]);
    }
}
void XuatSanPham(sp sanpham){
    cout <<sanpham.ma<<" - "<<sanpham.ten<<" - "<<sanpham.dongia<<endl;
}

void XuatDanhSach(sp dssp[],int n){
    for(int i=0; i<n;i++){
    //     cout <<dssp[i].ma<<" - "<<dssp[i].ten<<" - "<<dssp[i].dongia<<endl;
        XuatSanPham(dssp[i]);
    }
}

void LuuFile(sp dssp[], int n){
    ofstream outfile ("dssv.txt",ofstream::binary);
    for(int i=0; i<n; i++){
        sp temp=dssp[i];
        outfile.write((char*)&temp, sizeof(sp));
    }
    outfile.close();
}
void DocFile(sp dssp[], int &n){
    ifstream infile("dssv.txt",ifstream::binary);
    // infile.seekg(0,infile.end);
    // long size=infile.tellg();
    // infile.seekg(0);
    // n=size / sizeof(sp);
    // printf("%d\n",n);


    int i=0;
    while(!infile.eof()){
        sp temp;
        infile.read((char*)&temp,sizeof(sp));
        dssp[i++]=temp;
    }
    n=i;
    infile.close();
}
int main(){
    int n;
    sp dssp[100];
    // NhapDanhSach(dssp,n);
    // LuuFile(dssp,n);
    DocFile(dssp,n);
    XuatDanhSach(dssp,n);
}