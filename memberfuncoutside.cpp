#include<iostream>
using namespace std;
class outside{
    private:
        int rollno;
        char name[20];
    public:
        outside():rollno(0),name("No Name"){}
        void getdata();
        void showdata();
};

void outside::getdata(){
    cout<<"Enter your roll no :"; cin>>rollno;
    cout<<"Enter your name :"; cin>>name;
}

void outside::showdata(){
    cout<<"\nRoll No : "<<rollno;
    cout<<"\nStudent Name : "<<name;
}

int main(){
    outside out1,out2,out3;
    out1.getdata();
    out2.getdata();

    out1.showdata();
    out2.showdata();
    out3.showdata();
    return 0 ;
}