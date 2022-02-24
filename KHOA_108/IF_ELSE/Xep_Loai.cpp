#include<iostream>
using namespace std;
int main(){
    int toan,li,hoa;
    float tb;
    cout<<"Nhap diem Toan,Li,Hoa: ";
    cin >> toan>>li>>hoa;
    tb=(toan+li+hoa)/3;
    if(tb<=10 && tb>=8){
        cout<<"Xep loai gioi ";
    }else if(tb>=7){
        cout<<"Xep loai kha";
    }else{
        cout<<"Xep loai TB";
    }
}