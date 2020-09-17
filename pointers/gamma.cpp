#include<iostream>
using namespace std;
class gamma{
    private:
        static int total;
        int id;
    public:
        gamma(){
            total++;
            id=total;
        }
        ~gamma(){
            total--;
            cout<<"Destructing Id No :"<<id<<endl;
        }
        static void showdata(){

            cout<<"Total is :"<<total<<endl;
        }
        void showid(){
            cout<<"Id is :"<<id<<endl;
        }

};
int gamma::total=0;
int main(){
    gamma g1;
    gamma::showdata();
    gamma g2,g3;
    gamma::showdata();

    g1.showid();
    g2.showid();
    g3.showid();

}