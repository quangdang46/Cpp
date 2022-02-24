// Giai pt Ax^2+Bx+C=0
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    float denta,x1,x2;
    cout<<"Nhap a,b,c: ";
    cin >>a>>b>>c;
    denta=pow(b,2)-4*a*c;
    if(denta==0){
        cout<<"Pt co nghiem duy nhat la: "<<-b*1.0/(2*a);
    }else if(denta<0){
        cout<<"Pt vo nghiem";
    }else{
        x1=(-b+sqrt(denta))/(2*a);
        x2=(-b-sqrt(denta))/(2*a);
        cout<<"Pt co 2 nghiem phan biet x1= "<<x1<<" , x2= "<<x2<<"";
    }


}
