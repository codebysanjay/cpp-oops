#include<iostream>
using namespace std;
class staticdata{
    private:
        static int count;
    public:
        staticdata(){count++;}
        int getcount(){return count;}
};

int staticdata::count=0;
int main(){
    staticdata s1,s2,s3;
    cout<<"\ncount is :"<<s1.getcount();
    cout<<"\ncount is :"<<s2.getcount();
    cout<<"\ncount is :"<<s3.getcount();
    staticdata s4;
    cout<<"\ncount is :"<<s4.getcount();
    return 0;
}
// $ ./a.exe

// count is :3
// count is :3
// count is :3
// count is :4