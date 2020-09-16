#include <iostream>
using namespace std;
int main()
{
   // int ar[10];
   // int h=5;
   // int *p=&h;
   // int u=10;
   // int* const ptr1=ar;
   // const int* ptr=&u;
   // *p=6;


int n[3]={5,55,8};
int *ptr=n;
   for (int i = 0; i < 3; i++) {
      cout << "Value of n[" << i << "] = ";
      cout << ptr[i] << endl;
   }

   
   return 0;


   // int intarray[5] = {31, 54, 77, 52, 93};
   // cout<<intarray<<endl;
   // for (int j = 0; j < 5; j++)
   //    cout << *(intarray + j) << endl;
   // return 0;
}