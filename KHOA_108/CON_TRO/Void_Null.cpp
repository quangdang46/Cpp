#include<iostream>
using namespace std;
int main(){
    int n=100;
    float f=5.6;
    int* pa=&n;
    float* pb=&f;
    cout<<"Dia chi cua bien n:"<<&n<<endl;
    cout<<"Gia tri cua bien n:"<<n<<endl;
    cout<<"Dia chi ma con tro pa tro toi:"<<pa<<endl;
    cout<<"Gia tri tai dia chi ma con tro pa tro toi:"<<*pa<<endl;
    //Toan tu trong con tro 
    (*pa)++;
    cout<<"Dia chi cua con tro pa++:"<<pa<<endl;
    cout<<"Gia tri cua con tro pa++:"<<*pa<<endl;
    //Con tro void Con tro Null
    void* px;
    *(int*)px=100;
    cout<<"Dia chi cua con tro px:"<<px<<endl;
}