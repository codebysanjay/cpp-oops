#include<iostream>
#include<iomanip>
using namespace std;
const int districts =4;
const int months = 3;
int main(){
    int d,m;
    double sales[districts][months]={
        {142.5,125.3,125.4},
        {145.5,129.3,124},
        {147.5,125.0,127.4},
        {143.5,143.3,284}
    };
    for(d=0;d<districts;d++){
        cout<<"\nDistrict "<<d+1;
        for(m=0;m<months;m++){
            cout<<setw(10)<<setiosflags(ios::fixed)
            <<setiosflags(ios::showpoint)<<setprecision(2)
            <<sales[d][m];
        }
    }
    return 0;
}