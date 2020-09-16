#include <iostream>
#include <string>
using namespace std;
class capital{
    string stat;
    string capname;
    // string state;
    // string capname;
    public:
    capital():state("null"),capname("null"){}
        void getdata(){
            cout<<"\nEnter the state name ";cin>>stat;
            cout<<"Enter the capital name of "<<state<<" :";cin>>capname;
        }
        void showdata(){
            cout<<"\nCapital of "<<stat<<" is "<<capname<<endl;
        }
};
int main(){
    capital *caps[5];
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