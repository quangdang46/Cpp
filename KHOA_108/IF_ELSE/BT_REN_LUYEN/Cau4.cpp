#include<conio.h>
#include<stdio.h>
int nhuan(int y){
    if(y%400==0||y%4==0&&y%100!=0)    {
        return 1;
    }
    return -1;
}
int songaytrongthang(int m,int y)
{
    switch(m){
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:{
            return 31;
            break;
        }
        case 2:{
            if(nhuan(y)){
                return 29;
            }
            return 28;
        }
        case 4:case 6:case 9:case 11:
        {
            return 30;
        }
       
    }
}
void ngaytieptheo(int y,int m,int d)
{
    int ny=y;int nm=m;int nd=d;
    if(y>0&&m>0&&m<13&&d>0&&d<=(songaytrongthang(m,y)))
    {
       
        nd=d+1;
        if(m!=12&&d==songaytrongthang(m,y))
        {
            nd=1;
            nm=m+1;
        }
        else
        if(m==12&&d==songaytrongthang(m,y))
        {
            nd=1;
            ny=y+1;
            nm=1;
        }
        else
        if(m==2)
        {
            if(nhuan(y))
            {
                if(d==29)
                {
                    nd=1;
                    nm=m+1;
                }
            }
            else
            {
                if(d==28)
                {
                    nd=1;nm=m+1;
                }
            }
        }
       
    }
    printf("\n ngay tiep theo : %d:\t%d:\t%d",nd,nm,ny);
}
int main(){
    int y;int m;int d;
    printf("\nnhap ngay :");
    scanf("%d",&d);
    printf("\nnhap thang :");
    scanf("%d",&m);
    printf("\nnhap nam :");
    scanf("%d",&y);
    ngaytieptheo(y,m,d);
    getchar();
    return 0;
}