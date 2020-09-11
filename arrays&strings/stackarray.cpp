#include<iostream>
using namespace std;
class stack{
    private:
        int top;
        enum {MAX=10};
        int st[MAX];
    public:
        stack(){
            top=0;
        }
        void push(int var){
            st[++top] = var;
        }
        int pop(){
            return st[top--];
        }
};
int main(){
    stack s1;
    s1.push(11);
    s1.push(22);
    cout<<"\n1: "<<s1.pop()<<endl;
    cout<<"\n2: "<<s1.pop()<<endl;
    s1.push(33);
    s1.push(44);
    s1.push(55);
    s1.push(66);
    cout<<"\n3: "<<s1.pop()<<endl;
    cout<<"\n4: "<<s1.pop()<<endl;
    cout<<"\n5: "<<s1.pop()<<endl;
    cout<<"\n6: "<<s1.pop()<<endl;
    return 0;
}