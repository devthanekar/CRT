#include<stdio.h>
int main(){ char name[]="ashish";//each alphabet will take seperate location to store
int i;
for (i=0;i<6;i++)// this loop will print each alphabet one after another
{
    printf("%c",name[i]);
}
}
