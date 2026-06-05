# include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[20]="Ashish";
    char b[20]={'A','s','h','i','s','h','\0'};
    char c[50];
    cout<<"Enter string c:";
    cin>>c;
    cout<<"Lenght of string a :-"<<strlen(a)<<endl;
    cout<<"Lenght of string b :-"<<strlen(b)<<endl;
    cout<<"Lenght of string c :-"<<strlen(c)<<endl;
    return 0;


}
