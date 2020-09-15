#include<iostream>
using namespace std;
int main(){
    int * ptr;
    cout<<ptr;
    int var1=11;
    int var2=21;
    cout<<"\nVar 1 address :"<<&var1;
    cout<<"\nVar 2 address :"<<&var2<<endl;
    
    ptr=&var1;
    cout<<"\nVar1 ="<<ptr;
    ptr=&var2;
    cout<<"\nVar2 ="<<*ptr;


    delete ptr;
    return 0;
}