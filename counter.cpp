#include <iostream>
using namespace std;
class counter{
    private:
        unsigned int count;
    public:
        counter():count(0){
            /* empty body*/
            }
        void inc_count(){
            count++;
            }
        int get_count(){
            return count;
            }
};
int main(){
    counter c1,c2;
    cout<<"\nC1 :"<<c1.get_count();
    cout<<"\nC1 :"<<c2.get_count();

    c1.inc_count();
    c2.inc_count();
    c2.inc_count();

    cout<<"\nNew C1:"<<c1.get_count();
    cout<<"\nNew C1:"<<c2.get_count();
    cout<<endl;
    return 0;
}