#include <iostream>
using namespace std;
class capitals{
    protected:
        char capname[50];
        char state[50];
        // string capname;
    public:
        void getdata(){
            cout<<"Enter the state name :";
            cin>>state;
            cout<<"Enter the capital name of"<<state<<" :";
            cin>>capname;
        }
        void showdata(){

            cout<<"Capital of "<<state<<" is "<<capname<<endl;
        }
};
int main(){
    capitals *caps[5];
    for(int i=0;i<5;i++){
        caps[i]=new capitals;
        caps[i]->getdata();
    }
    for(int i=0;i<5;i++){
        caps[i]->showdata();
    }
    return 0;
}