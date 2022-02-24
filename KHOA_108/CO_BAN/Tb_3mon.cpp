#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float toan,li,hoa,tb;
    cout << "Nhap diem Toan: ";
    cin >> toan;
    cout << "Nhap diem Li: ";
    cin >> li;
    cout << "Nhap diem Hoa: ";
    cin >> hoa;
    tb=(toan+li+hoa)/3;
    cout << "Diem trung binh: "<<tb<<endl;
    cout << "Lam tron: "<<setprecision(3)<<tb<<endl;
}