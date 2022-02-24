/*Câu 1: Cho cấu trúc nhân viên: Mã, tên, năm sinh.
Nhập, xuất nhân viên
Nhập, xuất danh sách nhân viên
Lọc Nhân viên theo năm sinh bất kỳ*/
#include<iostream>
using namespace std;
struct NhanVien{
    int ma;
    char ten[100];
    int namsinh;
};
void Nhap(NhanVien arr[],int n){
    for(int i=0;i< n; i++){
        cout <<"Nhap ma:";cin >>arr[i].ma;
        cout<<"Nhap ten:";fflush(stdin);gets(arr[i].ten);
        cout << "Nhap nam sinh:";cin>>arr[i].namsinh;
    }
}

void XuatMang(NhanVien arr[],int n){
    for(int i=0;i< n; i++){
        cout <<"Ma:"<<arr[i].ma<<"\t"<<"Ten:"<<arr[i].ten<<"\t"<<"Nam sinh:"<<arr[i].namsinh<<endl;
    }
}

void Tim(NhanVien arr[],int n){
    int res;
    cout << "Nhap nam sinh:";cin>>res;
    for(int i=0;i< n; i++){
        if(arr[i].namsinh==res){
            cout <<"Ma:"<<arr[i].ma<<"\t"<<"Ten:"<<arr[i].ten<<"\t"<<"Nam sinh:"<<arr[i].namsinh<<endl;
        }
    }
}
int main(){
    NhanVien arr[100];
    int n;
    cout << "Nhap n:";cin >> n;
    Nhap(arr,n);
    XuatMang(arr,n);
    Tim(arr,n);
}