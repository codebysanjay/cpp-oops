#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){

    int i=10;
    double d=526;
    char ch='h';
    string str1="Hello";
    string str2="World!";
    ofstream outfile("file.pdf");
    outfile<<ch<<i<<d<<str1<<str2<<endl;
    cout<<"File Written "<<endl;

    return 0;
}