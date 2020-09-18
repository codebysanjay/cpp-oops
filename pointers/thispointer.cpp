#include<iostream>
using namespace std;
class where {
    private:
        char array[100];
    public:
        void reveal(){
            cout<<"\nMy Object ADDRESS is :"<<this;
        }

};
int main(){

    where w1,w2,w3;
    w1.reveal();
    w2.reveal();
    w3.reveal();
    return 0;
}