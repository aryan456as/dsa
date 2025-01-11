#include<iostream>

using namespace std;

int main(){
int arr[]= {2,4,5,6,7,8,1,3};
int max=0;

for(int i=0;i<8;i++){
    if(arr[i]>max)
    max=arr[i];
} cout<<max;
return 0;
}