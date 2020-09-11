#include<iostream>
#include<string>
using namespace std;
int main(){
    string fullname,nickname,address;
    string greet("Hello! ");

    cout<<"\nEnter your first name :";
    getline(cin,fullname);
    cout<<"\nYour full name is :"<<fullname;


    cout<<"\nEnter your nickname :";
    cin>>nickname;
    greet+=nickname;
    cout<<greet;

    cout<<"\nEnter your addressin seperate lines :";
    cout<<"\nTerminate with $ ";
    getline(cin,address,'$');
    cout<<"\nYour address is "<<address;


    return 0;
}