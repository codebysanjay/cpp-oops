#include<iostream>
using namespace std;
int main(){
    int i,j,arr[3],p=0;
    for (i=0;i<3;i++){
        cin>>arr[i];
        
    }
    for (i=0;i<3;i++){
        p+=arr[i];
        
    }
    cout<<"Sum is "<<p<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<(3-i);j++){
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }

    for(i=0;i<3;i++){
        if (arr[i]==p){
            cout<<"The sum is "<<p<<" and is present in the array\n";
        }   
    }
    
}