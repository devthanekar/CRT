#include<iostream>
using namespace std;
void duplicates(int arr1[],int arr2[],int n1,int n2){
cout<<"[";
for(int i=0;i<n1;i++)//1
    {
    for(int j=0;j<n2;j++)//3
    {
    if(arr1[i]==arr2[j])
    {
       cout<<arr1[i];
       cout<<",";

       }
    }
}
cout<<"]";
}
int main(){

int arr1[]={1,2,3,4};
int arr2[]={3,4,5,6};
int size1=sizeof(arr1)/sizeof(arr1[0]);
int size2=sizeof(arr2)/sizeof(arr2[0]);
duplicates(arr1,arr2,size1,size2);
return 0;
}

