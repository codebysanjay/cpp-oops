#include<iostream>
using namespace std;
class time24{
    private:
        int h,m;
    public:
        void getData(){
            cout<<"\nEnter hour and minute (24-hours) :";
            cin>>h>>m;
        }
        int geth(){return h;}
        int getm(){return m;}
        void showdata(){
            cout<<"\n";
            if(h<=9){
                cout<<"0"<<h<<":";
            }
            else{
                cout<<h<<":";
            }
            if(m<=9){
                cout<<"0"<<m;
            }
            else{
                cout<<m;
            }
        }
};
class time12{
    private:
        int h,m;
    public:
        time12(){}
        time12(time24 t24){
            h=t24.geth();
            if(h>12){
                h=h%12;
                m=t24.getm();
            }  
        }
        void getdata(){
            cout<<"\nEnter hour and minute (12-hours) :";
            cin>>h>>m;
        }
        void showdata(){
            cout<<"\n";
            if(h<=9){
                cout<<"0"<<h<<":";
            }
            else{
                cout<<h<<":";
            }
            if(m<=9){
                cout<<"0"<<m;
            }
            else{
                cout<<m;
            }
        }
};

int  main(){
    time24 T24;
    T24.getData();
    time12 T12(T24);
    T24.showdata();
    T12.showdata();
    return 0;
}