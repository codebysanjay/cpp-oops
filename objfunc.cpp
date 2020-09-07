#include<iostream>
using namespace std;
class Distance {
    private:
        int feet;
        int inches;
    public:
        Distance():inches(0),feet(0){}
        Distance( int ft, float in):feet(ft),inches(in){}
        void getdist(){
            cout<<"\nEnter Feet :";cin>>feet;
            cout<<"\nEnter Inches :";cin>>inches;
        }
        void showdist(){
            cout<<feet<<"\'-"<<inches<<'\"';
        }
        void adddist(Distance,Distance);
};
void Distance::adddist(Distance d2,Distance d3){
    inches=d2.inches+d3.inches;
    feet=0;
    if(inches>=12.0){
        inches-=12.0;
        feet++;
    }
    feet=d2.feet+d3.feet;
}
int main(){
    Distance dist1,dist3;
    Distance dist2(11,6);
    dist1.getdist();
    dist3.adddist(dist1,dist2);
    

    cout<<"\ndist1 :";dist1.showdist();
    cout<<"\ndist2 :";dist2.showdist();
    cout<<"\ndist3 :";dist3.showdist();

    cout<<endl;

    return 0;

}