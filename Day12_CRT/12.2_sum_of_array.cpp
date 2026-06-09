#include <iostream>
using namespace std;
 void sumarray(int arr[],int size){
     int sum=0;
 for(int i=0; i<size;i++){
    sum=sum+arr[i];
 }
 cout<<"Sum of array :"<<sum;
 }
 int main(){
 int arr[]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(arr[0]);
 sumarray(arr,size);
 return 0;
 }
