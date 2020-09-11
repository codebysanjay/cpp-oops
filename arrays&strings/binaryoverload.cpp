#include<iostream>
using namespace std;
class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance():feet(0),inches(0){}
        Distance(int ft,float in):feet(ft),inches(in){}
        void getdist(){
            cout<<"\nEnter feet :";cin>>feet;
            cout<<"\nEnter inches :";cin>>inches;
        }
        void showdist(){
            cout<<feet<<"\'-"<<inches<<'\"';
        }
        Distance operator + (Distance d) const{
            int f=feet+d.feet;
            float i=inches+d.inches;
            if(i>=12){
                f++;
                i-=12;
            }
            return Distance(f,i);
        }
};

int main(){
    Distance d1(12,5),d2,d3;
    d2.getdist();
    d3=d2+d1;
    cout<<"\nD1 = ";d1.showdist();
    cout<<"\nD2 = ";d2.showdist();
    cout<<"\nD3 = ";d3.showdist();
    return 0;
}