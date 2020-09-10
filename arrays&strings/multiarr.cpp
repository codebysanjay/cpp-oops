#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int district = 4;
    const int month = 3;
    double sales[district][month];
    cout<<endl;
    for(int d=0;d<district;d++){
        for(int m=0;m<month;m++){
            cout<<"Enter sales for District "<<d+1<<", Month "<<m+1<<" :";
            cin>>sales[d][m];
        }
    }
    cout<<endl<<endl;
    cout<<"                    Month\n";
    for(int d=0; d<district; d++){
        cout<<"\nDistrict "<<d+1;
        for(int m=0; m<month; m++){
            cout<<setiosflags(ios::fixed)
                <<setiosflags(ios::showpoint)
                <<setprecision(2)
                <<setw(10)
                <<sales[d][m];
        }
    }
    cout<<endl;
    return 0;
}