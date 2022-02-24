/*
Câu 2: Cho cấu trúc phòng ban, nhân viên
Phòng ban: mã phòng ban, tên phòng ban
Nhân viên: mã nhần viên, tên nhân viên
Một phong ban có nhiều nhân viên, 1 nhân viên thuộc về 1 phòng ban
-Nhập xuất phòng ban nhân viên
-Lọc nhân viên theo phòng ban
*/
#include<iostream>
#include<string.h>
using namespace std;
struct NhanVien{
    int MaNhanVien;
    char TenNhanVien[60];
};
struct PhongBan {
    char MaPhongBan[20];
    char TenPhongBan[20];
    NhanVien nv;
};
typedef struct PhongBan pb;
void Nhap(pb arr[],int n){
    for(int i=0;i< n; i++){
        cout <<"Ma phong:";fflush(stdin);gets(arr[i].MaPhongBan);
        cout <<"Ten phong:";fflush(stdin);gets(arr[i].TenPhongBan);
        cout <<"Ma nhan vien:";cin>>arr[i].nv.MaNhanVien;
        cout <<"Ten nhan vien:";fflush(stdin);gets(arr[i].nv.TenNhanVien);
    }
}
void XuatMang(pb arr[],int n){
    for(int i=0;i< n; i++){
        cout <<"Ma phong:"<<arr[i].MaPhongBan<<"\t"<<"Ten phong:"<<arr[i].TenPhongBan<<"\t"<<"Ma nhan vien:"<<arr[i].nv.MaNhanVien<<"\t"<<"Ten nhan vien:"<<arr[i].nv.TenNhanVien<<endl;  
    }
}
void TimPhong(pb arr[],int n){
    char x[20];
    cout <<"Nhap phong ban can tim kiem:";fflush(stdin);gets(x);
    int check=0;
    for(int i=0;i< n; i++){
        if(strstr(arr[i].MaPhongBan,strlwr(x))!=NULL){
            cout <<"Ma phong:"<<arr[i].MaPhongBan<<"\t"<<"Ten phong:"<<arr[i].TenPhongBan<<"\t"<<"Ma nhan vien:"<<arr[i].nv.MaNhanVien<<"\t"<<"Ten nhan vien:"<<arr[i].nv.TenNhanVien<<endl;  
            check=1;
        }
    }
    if (check==1){
        cout<<"Khong tim thay!!!";
    }
    
}
int main(){
    pb arr[100];
    int n;
    cout<<"Nhap n: ";
    cin >> n;
    Nhap(arr,n);
    XuatMang(arr, n);
    TimPhong(arr, n);
}