#include<stdio.h>
int main(){
   char str[]="\0";
   if(printf("%s",str))
      {
       printf("inside if block");
       }
   else{
    printf("inside else block");
   }
   }
   // Value \0 gives NULL value
