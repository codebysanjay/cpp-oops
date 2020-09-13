#include<iostream>
using namespace std;
const int LEN=80;
class employee{
    private:
        char name[LEN];
        unsigned long number;
    public:
        void getdata(){
            cout<<"\nEnter last name: ";cin>>name;
            cout<<"\nEnter Number :";cin>>number;
        }
        void putdata() const{
            cout<<"\nName :"<<name;
            cout<<"\nNumber :"<<number;
        }
};
class manager:public employee{
    private:
        char title[LEN];
        double dues;
    public:
        void getdata(){
            employee::getdata();
            cout<<"\nEnter your title :";cin>>title;
            cout<<"\nEnter golf club dues :";cin>>dues;

        }
        void putdata(){
            employee::putdata();
                cout<<"\nTitle :"<<title;
                cout<<"\nGolf Club Dues"<<dues;   
        }
};
class scientist: public employee{
    private:
        int pubs;
    public:
        void getdata(){
            employee::getdata();
            cout<<"\nEnter number of publications :";cin>>pubs;
        }
        void putdata(){
            employee::putdata();
            cout<<"\nNumber of publications :"<<pubs;
        }
};
class labour:public employee{};
int main(){
    manager m1,m2;
    scientist s1;
    labour l1;

    cout<<"\n\n\n*************************************"<<endl<<endl<<endl;

    cout<<"\nEnter data for manager 1:";
    m1.getdata();


    cout<<"\nEnter data for manager 2:";
    m2.getdata();

    cout<<"\nEnter data for scientist 1:";
    s1.getdata();

    cout<<"\nEnter data for Labour 1:";
    l1.getdata();

    cout<<"\nData on manager 1:";
    m1.putdata();

    cout<<"\nData on manager 2:";
    m2.putdata();

    cout<<"\nData on Scientist 1:";
    s1.putdata();

    cout<<"\nData on Labour 1:";
    l1.putdata();



    cout<<"\n\n\n********************************************"<<"\n                   Thank you"<<endl<<endl;

}