#include <iostream>
using namespace std;

class smallobj{
    private:
        int somedata;
    public:
        void setdata (int d){
            somedata=d;
        }
        void showdata(){
            cout<<"Data is "<<somedata<<endl;
        }
};

int main(){
    smallobj s1,s2;
    s1.setdata(2000);
    s2.setdata(300);

    s1.showdata();
    s2.showdata();
}

// here smallobj is a class
// s1 and s2 are objects of class smallobj
// private data is only accesible inside the class it is the 
// showdata and setdata are called member funtions
//  in the above class smallobj is the name of the class
// int data; is an private function 
// while setdata showdata are public functions
// After the final brace " ; " is used to close the class


// USING THE CLASS

// smallobj s1,s2; defines objects s1 and s2
// This will only describe only how the structure will look up but donot create any structure

// setdata showdata are member functions 
// to use a member function the dot operator connects the object name with the member fuction


