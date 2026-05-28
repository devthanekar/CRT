#include <stdio.h>
int main()
{
int arr[5],i;
for( i=0;i<5;i++)
{
printf("Enter the value of arr[%d];",i);
scanf("%d",&arr[i]);
}
printf("The array element are:");
for(i=0;i<5;i++)
{
printf("%d\t",arr[i]);}
return 0;}
