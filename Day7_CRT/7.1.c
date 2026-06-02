#include<iostream>
using namespace std;
int binarySearch(int arr[],int size ,int target){
int low=0;
int high= size-1;
 while(low<high){
    int mid=(low+high)/2;
    cout<<mid;
 }

}




int main(){
int arr[]={10,20,30,40,50,60,70};
int size =sizeof(arr)/sizeof(arr[0]);// use to calculate size of array
int target=50;
int result=binarySearch(arr, size ,target);//calling function

