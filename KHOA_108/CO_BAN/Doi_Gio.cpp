#include<iostream>
using namespace std;
int main(){
    int t,hour,min,sec;
    cout << "Nhap so giay muon doi: ";
    cin >> t;
    hour=(t/3600)%24;
    min=(t%3600)/60;
    sec=(t%3600)%60;
    int gio=hour>12 ? hour-12 : hour;
    // cout <<""<<t<<" sec = "<<gio<<":"<<min<<":"<<sec<<""<<endl;
    cout << gio<<":"<<min<<":"<<sec<<(hour>12?" PM":" AM")<<endl;

}