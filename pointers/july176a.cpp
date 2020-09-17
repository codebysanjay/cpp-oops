#include<iostream>
using namespace std;
int main(){
    void bsort(int*,int);
    int ar[10]={5,58,66,8,58,99,33,11,5,2};
    int *ptr;
    bsort(ar,10);
    for(int k=0;k<10;k++){
        cout<<*(ar+k)<<" ";
    }
    

    return 0;
}
void order(int*num1,int*num2){
        if(*num1>*num2){
            *num1=*num1+*num2;
            *num2=*num1-*num2;
            *num1=*num1-*num2;
        }
}
void bsort(int *ptr,int n){
    int i,j;
    void order(int*,int*);
    for(i=0;i<n-1;i++){
        for(j=i;j<n;j++){
            order(ptr+i,ptr+j);
        }
    }
}