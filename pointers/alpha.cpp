#include<iostream>
using namespace std;
class alpha{
    private:
        int data;
    public:
        alpha(){}
        alpha(int d){
            data=d;
        }
        void display(){
            cout<<data;
        }
        alpha operator = (alpha &a){
            data = a.data;
            cout<<"\nAssignment Operator Invoked";
            return alpha(data);
        }
};
int main(){
    
}