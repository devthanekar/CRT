#include<stdio.h>
int main(){
int arr[3],i=0;// array size is 3 therefore it create 3 memory location to store data variable
for(i=0;i<3;i++)// this for use to store the data in array
    {
arr[i]=i;
}
for(i=0;i<3;i++)//this for is use to print stored data in array
{
printf("%d",arr[i]);
}
}
