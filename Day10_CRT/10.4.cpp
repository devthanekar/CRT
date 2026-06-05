# include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[50],str2[50];
    cout<<"Enter first string:";
    cin>>str1;
    cout<<"Enter second string:";
    cin>>str2;
    if(strcmp(str1,str2)==0)
    {
        cout<<"String are equal"<<endl;
    }
    else
        {
                cout<<"String are not equal"<<endl;

        }

}
