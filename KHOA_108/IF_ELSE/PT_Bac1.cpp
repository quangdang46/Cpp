// Giải và biện luận phương trình bậc 1: ax+b=0
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Nhap a va b: ";
    cin >> a >> b;
    if(a==0){
        if(b==0){
            cout<<"PT co vo so nghiem";
        }else{
            cout<<"PT vo nghiem";
        }
    }else{
        cout<<"Nghiem cua pt la: "<<-b*1.0/a<<endl;
    }
}
