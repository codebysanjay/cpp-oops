#include<iostream>
using namespace std;
// class staticfunc{
//     public:
//         static void read(int x, int y){
//             if(x>y) cout<<"\n"<<x<<" is big";
//             else if(x<y) cout<<"\n"<<y<<" is big";
//             else cout<<"\nBoth are equal";
//         }
// };
// int main(){
//     staticfunc t1;
//     t1.read(10,50);
//     staticfunc::read(10,10);
//     return 0;
// }

class sample{
    private:
        static int a,b;
    public:
        static void getdata(){
            cout<<"\nEnter two integers :";
            cin>>a>>b;
            cout<<"\na is :"<<a<<endl;
            cout<<"\nb is :"<<b<<endl;
        }
};
int sample::a;
int sample::b;
int main(){
    sample::getdata();
    return 0;
}