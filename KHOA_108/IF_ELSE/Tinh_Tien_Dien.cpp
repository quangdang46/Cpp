#include<iostream>
using namespace std;
int main(){
    int n,tien=0;
    cout<<"Nhap so dien(kWh): ";
    cin >> n;
    if(n<=100){
        tien+=n*600;
    }else if(n<=150){
        tien+=100*600+(n-100)*700;
    }else if(n<=200){
        tien+=100*600+50*700+(n-150)*900;
    }else{
        tien+=100*600+50*700+50*900+(n-200)*1100;
    }
    cout<<"Gia tien dien la: "<<tien;
}