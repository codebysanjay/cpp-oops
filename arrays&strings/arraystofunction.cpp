#include<iostream>
using namespace std;
const int row =2, col=2;
double m1[row][col], m2[row][col];
void addition(double array1[row][col],double array2[row][col]){
   double sum[row][col];
   cout<<"Output\n";
   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        sum[i][j]=m1[i][j]+m2[i][j];
        cout<<sum[i][j]<<" ";
        if (j==col-1){
            cout<<endl;
        }
      }
   }
}
int main(){
   cout << "Enter the elements of first 1st matrix: ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>m1[i][j];
     }
   }
   cout << "Enter the elements of second 2nd matrix: ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j<col;j++ ) {
       cin>>m2[i][j];
     }
   }

    addition(m1,m2);

   return 0;
}