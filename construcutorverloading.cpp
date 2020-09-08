#include<iostream>
using namespace std;
class circle{
    private:
        float radius;
    public:
        circle()
        {radius=5;} //default Constructor
        circle(float radius){
            (*this).radius=radius;
        }//parameterized constructor
        void showarea(){
            cout<<"Area ="<<3.14*radius*radius<<endl;
        }
};
//Contsructor Overloading 
// Declaring more than one constructor in same class 
int main(){
    circle c1,c2(20);
    c1.showarea();

    c2.showarea();
    return 0;

    
}