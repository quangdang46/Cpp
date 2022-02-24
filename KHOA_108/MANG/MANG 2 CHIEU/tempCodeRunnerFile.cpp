#include<stdio.h>
int main(){
    long n;
    int arr[100];
    printf("Nhap n: ");
    scanf("%d",&n);
    int a=0,i,j,check=1;
    while(n>0){
        arr[a]=n%10;
        a++;
        n/=10;
    }
    for(i=0;i<=a;i++){
        for(j=i+1;j<=a;j++){
            if(arr[i]==arr[j]){
                check=0;
                break;
            }
        }
    }
    if(check==1){
        printf("Cac chu so doi mot khac nhau");
    }else{
        printf("Cac chu so khong doi mot khac nhau");
    }
}