#include<iostream>
using namespace std;
int nonrepeate(int arr[], int n)
{
for(int i=0;i<n;i++)
{
bool isRepeated=false;
for(int j=0;j<n;j++)
{
if(i!=j && arr[i]==arr[j])
{
isRepeated=true;
break;
}
}
if(!isRepeated)
return arr[i];
}
return -1;
}
int main(){
int arr[]={1,2,3,2,1,4,5};
int size=sizeof(arr)/sizeof(arr[0]);
int result=nonrepeate(arr, size);
cout<<result;
return 0;
}
