#include<stdio.h>
int main(){
   char str[]="ashish\n";
   if(printf("%s",str))
      {
       printf("inside if block");
       }
   else{
    printf("inside else block");
   }
   }

