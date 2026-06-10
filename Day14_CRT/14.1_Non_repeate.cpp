#include<iostream>
using namespace std;
int nonrepeate(int arr[], int n)
{
for(int i=0;i<n;i++)
{int count=0;
for(int j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
{
count ++;
}


}
}
}
int main(){
int arr[]={1,2,3,2,1,4,5};
int size1=sizeof(arr)/sizeof(arr[0]);
nonrepeate(arr, size1);
return 0;

}
