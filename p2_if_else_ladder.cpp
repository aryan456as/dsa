#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any char:";
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        cout<<" Charachter is Alphabet";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Character is Digit";
    }
    else cout<<"Character is a special character";
}