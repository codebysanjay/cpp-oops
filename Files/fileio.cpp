#include<iostream>
#include <fstream>
using namespace std;
class person{
    protected:
        char name[40];
        int age;
    public:
        void getData(void){
        cout<<"\nEnter your name :";cin>>name;
        cout<<"\nEnter your age :";cin>>age;
        }
        void showdata(void){
            cout<<"\nName :"<<name;
            cout<<"\nAge :"<<age;
        }
        void diskIn(int); 
        void diskout();
        static int diskcount();
};
void person::diskIn(int pn){
    ifstream infile;
    infile.open("person.DAT",ios::binary);
    infile.seekg(pn*sizeof(person));
    infile.read((char*)this,sizeof(*this));
}
void person::diskout(){
    ofstream outfile;
    outfile.open("person.DAT", ios::app | ios::binary);
    outfile.write((char*)this,sizeof(*this));
}
int person::diskcount(){
    ifstream infile;
    infile.open("person.DAT",ios::binary);
    infile.seekg(0,ios::end);
    return (int)infile.tellg();
}
int main(){

    person p;char ch;
    do{
        cout<<"\nEnter data for person :";
        p.getData();
        p.diskout();
        cout<<"\nDo you want to add another (y/n):";
        cin>>ch;

    }while(ch=='y');
    int n= person::diskcount();
    cout<<"\nThere are "<<n<<" person's in your file";
    for (int i=0;i<n;i++){
        cout<<"\nPerson "<<i<<" :";
        p.diskIn(i);
        p.showdata();
    }
    cout<<endl;



    return 0;
}