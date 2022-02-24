#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void NhapMang( int** arr,int n){
    for(int i=0;i< n; i++){
        for(int j=0;j<n;j++){
            *(*(arr+i)+j)=-50+rand()%151;
        }
    }
}
void XuatMang( int** arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n; j++){
            cout <<*(*arr+i)+j<<"\t\t";
        }
        cout << endl;
    }
}
void TimMax(int** arr,int n){
    int max=**arr;
    for(int i=0;i< n; i++){
        for(int j=0;j<n;j++){
            if(*(*(arr+i)+j)>max){
                max=*(*(arr+i)+j);
            }
        }
    }
    cout<<"Gia tri lon nhat cua mang:"<<max<<endl;
}
int main(){
    srand(time(NULL));
    int n;
    cout <<"Nhap n: ";
    cin >> n;
    int **arr=new int*[n];
    for(int i=0; i<n; i++){
        *(arr+i) =new int[n];
    }
    NhapMang(arr,n);
    XuatMang(arr, n);
    TimMax(arr,n);
    // for(int i = 0; i < n; i++){
    //     delete []arr[i];
    // }
    // delete []arr;

}