#include<iostream>
using namespace std;
class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance():feet(0),inches(0.0){}
        Distance(int ft , float in):feet(ft),inches(in){}
        void getdist(){
            cout<<"\nEnter feet :";cin>>feet;
            cout<<"\nEnter Inches :";cin>>inches;
        }
        void showdist(){
            cout<<feet<<"\'-"<<inches<<'\"';
        }
};
int main(){
    Distance dist1(22,1.2);
    Distance dist2(dist1);
    Distance dist3=dist1;

    cout<<"\nDist1 :";dist1.showdist();
    cout<<"\nDist2 :";dist2.showdist();
    cout<<"\nDist3 :";dist3.showdist();
    return 0;
}