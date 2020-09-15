#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "\nEnter array size :";
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element no "<<i+1<<endl;
        cin>>p[i];
    }
    cout<<"\nElements are :";
    for(int i=0;i<n;i++){
        cout<<*(p+i)<<endl;
    }

    delete p;

    return 0;
}