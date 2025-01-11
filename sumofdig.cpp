#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int x;
    cout<<"Enter digit=";
    cin>>x;
    int sum=0;
    int d; int cnt=0;
    while(x>0){
      d=x%10;
      x=x/10;
        cnt++;
      sum=sum+d;  
    }

    cout<<"Sum of digit="<<sum;

    int arm=0;
    while(x>0){
        d=x%10;
        x=x/10;
        arm+= pow(d,cnt);
    }

    if (arm==x)
        cout<<"Yes";
    else    
        cout<<"No";

    return 0;
}