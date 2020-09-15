#include<iostream>
using namespace std;
void order(int *num1,int *num2){
    if(*num1>*num2){
        *num1=*num1+*num2;
        *num2=*num1-*num2;
        *num1=*num1-*num2;
    }
}
void bsort(int *ptr,int n){

    void order(int*,int*);
    int j,k;
    for(j=0;j<n-1;j++)
        for(k=j+1;k<n;k++)
            order(ptr+j,ptr+k);
}

int main(){
    void bsort(int* ,int);
    const int N =10;
    int arr[N]={22,5,4,8,9,7,65,88,58,55};

    bsort(arr,N);
    for(int i=0;i<N;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;


    
    return 0;
}
