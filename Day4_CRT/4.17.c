#include<stdio.h>
int main(){
    int arr[3],i,temp;
    arr[0]=11;
    arr[1]=22;
    arr[2]=33;
    temp=arr[0];
    arr[0]=arr[2];
    arr[2]=temp;
    for(i=0;i<3;i++){

printf("%d",arr[i]);
}
}
