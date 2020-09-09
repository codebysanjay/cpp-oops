#include<iostream>
using namespace std;
class simpleintrest{
    float p;
    int t;
    const float r;
    public:
        simpleintrest():r(4.2){}
         void getdata(float principle, int time){
             p=principle;
             t=time;
         }
         float show(){
             return p*r*t;
         }
};
int main(){
    simpleintrest s1;
    s1.getdata(10000,10);
    cout<<"\nIntrest amount is "<<s1.show();
    return 0;
}