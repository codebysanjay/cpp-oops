#include <iostream>
using namespace std;
class capitals{
    private:
        string stat;
        string capname;
        // string state;
        // string capname;
    public:
        void getdata(){
            cout<<"\nEnter the state name ";cin>>stat;
            cout<<"Enter the capital name of "<<stat<<" :";cin>>capname;
        }
        void showdata(){
            cout<<"\nCapital of "<<stat<<" is "<<capname<<endl;
        }
};
int main(){
    capitals *caps[5];
    caps[1]->getdata();
    caps[2]->getdata();
    caps[3]->getdata();
    caps[4]->getdata();
    caps[5]->getdata();
    caps[1]->showdata();
    caps[2]->showdata();
    caps[3]->showdata();
    caps[4]->showdata();
    caps[5]->showdata();

    return 0;
}