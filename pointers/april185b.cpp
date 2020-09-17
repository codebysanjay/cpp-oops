#include<iostream>
using namespace std;
int main(){

    int ar[5]={2,5,6,8,9};
    int *ptr;
    int n=0;
    
    // ptr=new int;
    // *ptr=5;
    // cout<<*ptr<<endl;
    ptr=&ar[0];
    for(int i=0;i<5;i++){
        cout<<*ptr<<endl;
        ptr++;
    }

    return 0;
}