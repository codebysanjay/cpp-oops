#include<iostream>
using namespace std;
int main(){
    int var1=11;
    int var2=21;
    cout<<"\nVar 1 address :"<<&var1;
    cout<<"\nVar 2 address :"<<&var2;
    int* ptr;
    ptr=&var1;
    cout<<"\nVar1 ="<<ptr;
    ptr=&var2;
    cout<<"\nVar2 ="<<*ptr;



    return 0;
}