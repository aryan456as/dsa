#include<iostream>

using namespace std;

int main() {
    int num,sum=0,fd,ld;

    cout<<"Enter number=";
    cin>>num;

    ld= num%10;
    
    while(num>=10){
        num = num/10;
    }
    fd=num;

    sum = ld+fd;

    cout<<"Sum of last and first digit is = "<<sum;
    
    return 1;
}