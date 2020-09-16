#include<iostream>
using namespace std;

class Distance {
    int feet;
    float inches;
    public:
        void getdist(){
            cout<<"\nEnter the feet :";cin>>feet;
            cout<<"\nEnter the inches :";cin>>inches;
        }
        void showdist(){
            cout<<feet<<"\'-"<<inches<<'\"';
        }
};

int main(){

    Distance dist;
    dist.getdist();
    dist.showdist();
    Distance* distptr=new Distance;
    distptr->getdist();
    distptr->showdist();
    cout<<endl;
}