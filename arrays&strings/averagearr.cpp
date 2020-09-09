#include<iostream>
using namespace std;
int main(){
    const int size=8;
    double array[size];
    cout<<"\nEnter the values for 6 array elements :";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    double total=0;
    for(int i=0;i<size;i++){
        total +=array[i];
    }
    double average = total/size;
    cout<<"\nThe average value is :"<<average;
    return 0;
}