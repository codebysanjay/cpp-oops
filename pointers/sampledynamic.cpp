#include<iostream>
using namespace std;

int  main(){
    int *p;
    float *q;
    char *r;

    p=new int(5);
    q=new float(5.5);
    r=new char('h');


    return 0;
}
/*
stack      | Heap
           |
p 65000    | 65000,455(memory address) 2byte of memory
           |
q          |4byte memmory
           |
r          |1 byte memmory

*/
