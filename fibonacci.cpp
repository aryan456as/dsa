#include<iostream>

using namespace std;

int main(){
    int a,b,c, n;
    cout<<"Enter the number of terms=";
    cin>>n;

    a=0;
    b=1;
    c=0;

    for(int i=0;i<n;i++){
        cout<<c<<',';

        a=b;
        b=c;

        c= a+b;
    }

    return 0;
}