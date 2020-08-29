#include<iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;
    public:
        void setdist(int ft, float in){
            feet = ft;
            inches = in;
        }
        void getdist(){
            cout<<"\nEnter feet: ";cin>> feet;
            cout<<"Enter inches: ";cin>> inches;
        }
        void showdist(){
            cout << feet<<"\'-"<<inches<<'\"';
        }
};

int main(){
    Distance dist1, dist2;
    dist1.setdist(11,6.25);
    dist2.getdist();

    cout<<"\n dist1 - "; dist1.showdist();
    cout<<"\n dist2 = ";dist2.showdist();
    return 0;
}