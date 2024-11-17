#include<iostream>

using namespace std;

int main(){
    int amt;
    int n500,n100,n50,n20,n10,n5,n2,n1;
    
    n500=n100=n50=n20=n10=n5=n2=n1=0;

    cout<<"Enter amount=";
    cin>>amt;

    if(amt>=500){
        n500= amt/500;
        amt -= n500 *500;
    }
    if(amt>=100){
        n100 = amt/100;
        amt -= n100*100;
    }
    if(amt>=50){
        n50 = amt/50;
        amt -= n50*50;
    }
    if(amt>=10){
        n10 = amt/10;
        amt -= n10*10;
    }
    if(amt>=5){
        n5 = amt/5;
        amt -= n5*5;
    }
    if(amt>=1){
        n1=amt;
    }

    cout<<"Total no. of notes \n";
    cout<<n500<<endl<<n100<<endl<<n50<<endl<<n10<<endl<<n5<<endl<<n2<<endl<<n1;

}