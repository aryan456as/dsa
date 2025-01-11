#include<iostream>

using namespace std;

int main(){
int arr[]= {2,4,5,6,7,8,1,3};
int sum=0; int prd=1;
for(int i=0;i<8;i++){
   sum+=arr[i];
   prd*=arr[i];
   
}
cout<<"Sum="<<sum<<endl<<"Product="<<prd;
int x= (2*4*5*6*7*8*1*3);
cout<<endl<<x;
return 0;
}