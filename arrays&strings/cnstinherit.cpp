#include<iostream>
#include "string"
using namespace std;
class type{
    private:
        string dimension;
        string grade;
    public:
        type():dimension("N/A"),grade("N/A"){}
        type(string di,string gr):dimension(di),grade(gr){}
        void gettype(){
            cout<<"Enter nominal dimension (eg;2X4) :";
            cin>>dimension;
            cout<<"Enter grade (rough, const, etc) :";
            cin>>grade;
        }
        void showtype() const {
            cout<<"\nDimension :"<<dimension;
            cout<<"\nGrade :"<<grade;
        }
};
class Distance{
    private:
        int feet;
        float inches;
    public: 
        Distance() : feet(0), inches(0.0)
        { } 
        Distance(int ft, float in) : feet(ft), inches(in)
        { }
        void getdist() 
        {
            cout <<"Enter feet:"; cin >> feet;
            cout <<"Enter inches:"; cin >> inches;
        }
        void showdist() const 
        { cout << feet << "\'-" << inches << '\"'; }
};
class Lumber : public type, public Distance
{
private:
    int quantity; 
    double price; 
public: 
    Lumber() : type(), Distance(), quantity(0), price(0.0){}
    Lumber( string di, string gr,
    int ft, float in,
    int qu, float prc ) : type(di, gr),Distance(ft, in),
    quantity(qu), price(prc){ }
    void getlumber()
    {
        type::gettype();
        Distance::getdist();
        cout <<"Enter quantity:"; cin >> quantity;
        cout <<"Enter price per piece:"; cin >> price;
    }
    void showlumber() const
    {
        type::showtype();
        cout <<"\n Length: ";
        Distance::showdist();
        cout <<"\n Price for "<< quantity<<"pieces: $" << price * quantity;
    }
};

int main()
{
Lumber siding; 
cout <<"\nSiding data:\n";
siding.getlumber();
Lumber studs( "2x4", "const", 8, 0.0, 200, 4.45F );
cout <<"\nSiding"; siding.showlumber();
cout <<"\nStuds"; studs.showlumber();
cout << endl;
return 0;
}