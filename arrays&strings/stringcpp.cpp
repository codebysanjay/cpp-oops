#include<iostream>
using namespace std;
int main(){
    string s1("String 1");
    string s2="String second";
    string s3;

    s3=s1;
    cout<<"S3 = "<<s3<<endl;

    s3="Neither "+s1+" nor ";
    s3+=s2;
    cout<<"s3 ="<<s3<<endl;

    s1.swap(s2);
    cout<<s1<<" nor "<<s2<<endl;
    
    return 0;

}