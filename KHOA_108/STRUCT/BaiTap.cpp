/*

Bài tập rèn luyện
Cho cấu trúc nhân viên: Mã (int), tên (Chuỗi), tuổi (int), địa chỉ cơ
quan, địa chỉ nhà riêng
Địa chỉ: tên đường, quận, tỉnh thành
 - Hãy tạo 2 cấu trúc như yêu cầu
 - Giả lập 2 nhân viên có đầy đủ thông tin theo mô tả, xuất thông tin
  ra màn hình.

*/
#include<iostream>
using namespace std;
struct diachi{
  char duong[32];
  char quan[32];
  char tinh[32];
};
struct NhanVien{
  int ma;
  char ten[20];
  diachi coquan;
};
void Nhap(NhanVien arr[]){
  for(int i=0; i <2;i++){
    cout <<"Nhap ma:";cin>>arr[i].ma;
    cout<<"Nhap ten: ";fflush(stdin);gets(arr[i].ten);
    cout <<"Nhap duong: ";fflush(stdin);gets(arr[i].coquan.duong);
    cout <<"Nhap quan: ";fflush(stdin);gets(arr[i].coquan.quan);
    cout <<"Nhap tinh: ";fflush(stdin);gets(arr[i].coquan.tinh);
  }
}
void Xuat(NhanVien arr[]){
  for(int i=0; i<2;i++){
    cout <<"Ma:"<<arr[i].ma<<"\t"<<"Ten:"<<arr[i].ten<<"\t"<<"Duong:"<<arr[i].coquan.duong<<"\t"<<"Quan:"<<arr[i].coquan.quan<<"\t"<<"Tinh:"<<arr[i].coquan.tinh<<endl;
  }
}
int main(){
  NhanVien arr[2];
  Nhap(arr);
  Xuat(arr);
}