#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int nguoi,may,dem=0;
    srand(time(NULL));
    may=rand()%20+1;
    bool iswin=true;
    do{
        printf("Moi ban nhap mot so tu [1,100]: ");
        scanf("%d",&nguoi);
        dem++;
        printf("So lan ban doan: %d\n",dem);
        if(nguoi==may){
            printf("Ban da doan dung roi!");
            iswin=true;
            break;
        }else if(nguoi>may){
            printf("So ban chon > So may\n");
        }else{
            printf("So ban chon < So may\n");
        }
        if(dem==7){
            iswin=false;
        }
    }while(iswin);
    if(iswin!=true){
        printf("GAME OVER\n");
    }
}