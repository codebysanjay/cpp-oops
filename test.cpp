// #include <iostream>
// using namespace std;
// class capitals{
//     private:
//         string stat;
//         string capname;
//         // string state;
//         // string capname;
//     public:
//         void getdata(){
//             cout<<"\nEnter the state name ";cin>>stat;
//             cout<<"Enter the capital name of "<<stat<<" :";cin>>capname;
//         }
//         void showdata(){
//             cout<<"\nCapital of "<<stat<<" is "<<capname<<endl;
//         }
// };
// int main(){
//     capitals *caps[5];
//     caps[1]->getdata();
//     caps[2]->getdata();
//     caps[3]->getdata();
//     caps[4]->getdata();
//     caps[5]->getdata();
//     caps[1]->showdata();
//     caps[2]->showdata();
//     caps[3]->showdata();
//     caps[4]->showdata();
//     caps[5]->showdata();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main () {
//    cout << "Content-type:text/html\r\n\r\n";
//    cout << "<html>\n";
//    cout << "<head>\n";
//    cout << "<title>Hello World - First CGI Program</title>\n";
//    cout << "</head>\n";
//    cout << "<body>\n";
//    cout << "<h2>Hello World! This is my first CGI program</h2>\n";
//    cout << "</body>\n";
//    cout << "</html>\n";
   
//    return 0;
// }

// #include <iostream>
 
// using namespace std;

// class Box {
//    public:
//       // Constructor definition
//       Box(double l = 2.0, double b = 2.0, double h = 2.0) {
//          cout <<"Constructor called." << endl;
//          length = l;
//          breadth = b;
//          height = h;
//       }
//       double Volume() {
//          return length * breadth * height;
//       }
//       int compare(Box box) {
//          return this->Volume() > box.Volume();
//       }
      
//    private:
//       double length;     // Length of a box
//       double breadth;    // Breadth of a box
//       double height;     // Height of a box
// };

// int main(void) {
//    Box Box1(3.3, 5.2, 1.5);    // Declare box1
//    Box Box2(0.1, 6.0, 2.0);    // Declare box2
// cout<<Box2.compare(Box1)<<endl;
//    if(Box1.compare(Box2)) {
//       cout << "Box2 is smaller than Box1" <<endl;
//    } else {
//       cout << "Box2 is equal to or larger than Box1" <<endl;
//    }
   
//    return 0;
// }

#include<iostream>
using namespace std;
class test{
   int a;
   public:
      int back(int t);
      void addval(int k){
         a=k;
         cout<<a;
      }
      void backer(){
         cout<<a;
      }
};
int test::back(int t){
   a=t;
   return a;
}
int main(){
   test h,a;
   a.addval(5);
   int k = h.back(20);
   cout<<k;
   
   test b(a);
   b.backer();
   return 0;
}