#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s.";
    int n;


    n=s1.find("Ipsum");
    cout<<"found at "<<n<<endl;


    n=s1.find_first_of("um");
    cout<<"First of um at "<<n<<endl;

    n=s1.find_first_not_of("aeiouAEIOU");
    cout<<"First consonant found at :"<<n;
    
    return 0;
}