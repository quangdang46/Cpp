/*
Viết chương trình thực hiện trò chơi đoán số như sau:
Máy lấy ra một số ngẫu nhiên nƐ[1,100] là số của máy: Số máy(sử dụng hàm
random).
- Người nhập vào một số (Số nhập)
+ Nếu Số nhập lớn hơn Số máy thì thông báo “Số bạn lớn hơn số máy".
+ Nếu Số nhập nhỏ hơn Số máy thì thông báo “Số bạn nhỏ hơn số máy".
 Trò chơi kết thúc khi:
+ Hoặc Bạn đã đoán trúng: thông báo “Ha ha bạn tài thật".
+ Hoặc Bạn đã đoán sai 7 lần: thông báo “Bạn đã thua rồi" và hiển thị Số máy.
+ Hỏi xem người chơi tiếp tục hay không
*/


#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
    int nguoi,may,dem=0;
    srand(time(NULL));
    may = rand()%20+1;
    bool iswin=true;
    do{
        cout<<"Moi ban nhap 1 so [1,20]: ";
        cin>>nguoi;
        dem++;
        cout<<"So lan ban doan la: "<<dem<<""<<endl;
        if(nguoi==may){
            cout<<"Ban da doan dung roi!"<<endl;
            break;
        }else if(nguoi>may){
            cout<<"So ban chon > So may"<<endl;
        }else{
            cout<<"So ban chon < So may"<<endl;
        }
        if(dem==7){
            iswin=false;
        }
    }while(iswin);
    if(iswin!=true){
        cout<<"GAME OVER!"<<endl;
    }
}