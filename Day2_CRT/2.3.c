#include <stdio.h>
int main()
{
int arr[10],i,sum=0;
for( i=0;i<10;i++)
{
printf("Enter the value of arr[%d];",i);
scanf("%d",&arr[i]);
sum+=arr[i];
}
for (i=0;i<10;i++){
    if(arr[i]==1){
            printf("Minimum value %d",arr[i]);
    }
}
for (i=0;i<10;i++){
    if(arr[i]==10){
            printf("Maximum value %d",arr[i]);
    }
}
printf("Sum=%d",sum);

return 0;
}
