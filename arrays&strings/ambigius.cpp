#include<iostream>
using namespace std;
class A{
    public:
        void show(){
            cout<<"\nClass A \n";
        }
};
class B{
    public:
        void show(){
            cout<<"\nClass B \n";
        }
};
class C:public A,public B{

};
int main(){
    C objC;
    objC.A::show();
    objC.B::show();
}