#include<iostream>
using namespace std;
const int row=2;
const int col=2;
// double array3[row][col];
// void adding(double array1[row][col],double array2[row][col]){
//     int r,c;
//     for (r=0;r<row;r++){
//         for(c=0;c<col;c++){
//             array3[r][c]=array1[r][c]+array2[r][c];
//         }
//     }
//     for (r=0;r<row;r++){
//         for(c=0;c<col;c++){
//             cout<<array3[r][c];
//         }
//     }
// }
int mian(){
    int r,c;
    double array1[row][col];
    double array2[row][col];
    for (r=0;r<row;r++){
        for(c=0;c<col;c++){
            cout<<"\nEnter element of row"<<r+1
                <<" of column "<<c+1<<"of matrix 1:";
            cin>>array1[r][c];
        }
    }
    for (r=0;r<row;r++){
        for(c=0;c<col;c++){
            cout<<"\nEnter element of row"<<r+1
                <<" of column "<<c+1<<"of matrix 2:";
            cin>>array1[r][c];
        }
    }
    // adding(array1,array2);
    return 0;
}
