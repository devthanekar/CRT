#include <stdio.h>
int main()
{
    int arr[10]={2,3,1,11,14,33,7,2,5};
    int small,large,i;
    small=large=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]<small){
            small=arr[i];
        }
        if(arr[i]>large){
           large=arr[i];
        }
    }
        printf("small=%d and large=%d",small,large);
        return 0;


}
