# include<iostream>
#include<string.h>
using namespace std;
void mystrlwr(char* s1);
int main()
{
    char str1[20];
    cout<<"Enter string: ";
    cin>>str1;
    mystrlwr(str1);
    cout<<"Upper case string:"<<str1;
    return 0;
}
void mystrlwr(char* s1){
int lenght=0;
while(*s1!='\0'){
    *s1=*s1+32;
    s1++;
}

}

