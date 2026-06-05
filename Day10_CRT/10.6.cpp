# include<iostream>
#include<string.h>
using namespace std;
void mystrlenth(char* s1);
int main()
{
    char str1[20];
    cout<<"Enter string: ";
    cin>>str1;
    mystrlenth(str1);
    return 0;
}
void mystrlenth(char* s1){
int lenght=0;
while(*s1!='\0'){
    lenght++;
    s1++;
}
cout<<"Lenght is:"<<lenght;
}

