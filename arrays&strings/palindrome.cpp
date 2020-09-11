#include<iostream>
using namespace std;
int main(){
    string word,temp;
    int n, i;

cout<<5/2;

    cout<<"\nEnter a word :";
    cin>>word;
    temp=word;
    n=word.length();
    for(i=0;i<n/2;i++){
        swap(word[i],word[n-i-1]);
    }
    cout<<word<<endl;
    cout<<temp;
if(word==temp){
    cout<<"\nEntered word is a palindrome!!!!!!!";
}
    return 0;
}