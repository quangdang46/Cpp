#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
typedef struct{
    int ma;
    char ten[50];
}NhanVien;

void luufile(){
    NhanVien dsNV[4];
    dsNV[0].ma=1;
    strcpy(dsNV[0].ten, "teo");
    dsNV[1].ma=2;
    strcpy(dsNV[1].ten, "ty");
    dsNV[2].ma=3;
    strcpy(dsNV[2].ten, "bin");
    dsNV[3].ma=3;
    strcpy(dsNV[3].ten, "BO");
    ofstream outfile ("csdl.txt",ofstream::binary);
    outfile.write((char*)dsNV, sizeof(dsNV));
    outfile.close();
}

void Xuat(NhanVien arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i].ma<<" "<<arr[i].ten<<endl;
    }
}
void docFile(){
    ifstream infile("csdl.txt",ifstream::binary);
    //TIm chieu dai cua mang
    infile.seekg(0,infile.end);
    long size = infile.tellg();
    infile.seekg(0);
    // int res=0;
    // res=size / sizeof(NhanVien);
    NhanVien dsNV[10];
    infile.read((char*)dsNV,sizeof(dsNV));
    infile.close();
    Xuat(dsNV,sizeof(dsNV));
}
int main(){
    // luufile();
    docFile();
}