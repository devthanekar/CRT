#include <iostream>
using namespace std;
void reverse(char str[],int start,int end){
if( start>=end){
    return ;
}
char temp =str[start];
str[start]=str[end];
str[end]=temp;

 reverse(str, start+1 ,end-1);
}
int main(){
char str[]="HELLO";
reverse (str ,0,4);
cout<<str;
return 0;
}
