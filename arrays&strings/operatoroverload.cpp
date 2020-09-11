#include<iostream>
using namespace std;
class counter{
    private:
        unsigned int count;
    public:
        counter():count(0){}
        unsigned int getcount(){
            return count;
        }
        counter(int c):count(c){}
        counter operator ++ (){
            return counter(++count);
        }
};
int main(){
    counter c1,c2,c3;
    cout<<"c1 "<<c1.getcount();
    cout<<"\nc2 "<<c2.getcount();
    ++c1;
    ++c2;
    ++c2;
    ++c2;
    c3=++c2;
    cout<<"\nc1 "<<c1.getcount();
    cout<<"\nc3 "<<c3.getcount();
    cout<<"\nc2 "<<c2.getcount();
    return 0;
}