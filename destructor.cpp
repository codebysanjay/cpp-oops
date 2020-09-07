#include <iostream>
using namespace std;
class Test{
    private:
        int data;
    public:
        Test():data(0){}
        ~Test(){}
};
int main(){
    Test t1;
    return 0;
}