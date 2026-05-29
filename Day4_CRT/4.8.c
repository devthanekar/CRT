#include <stdio.h>
int main(){ int i,sum=0;
for(i=0;i<10;i=i+3)//3 times loop will excecute
{
    sum=sum+i;//1.(initial state)sum=0,i=0;sum=0 2. sum=0,i=3;sum=3; 3.sum=3,i=6;sum=9 4.sum=9,i=9;sum=18
}
printf("%d",sum);
}
