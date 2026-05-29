#include<stdio.h>
int main(){
int i=0;
while(i++) //value of i is 0 therefore any loop with 0 cindition return nothing
{
printf("Loop");
if(i==3)
break;
}
return 0;
}
// the condition is while i++0,the expression is postincrement variable .
//so when it is applied for the first time the conditiona willbe false because while (0)
