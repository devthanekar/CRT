#include<algorithm>
#include<iostream>
using namespace std;
void show(int a[], int size)
{
    for(int i=0;i<size;++i)
    {
        cout<<a[i]<<" ";
    }
}
int main(){
int a[]={1,5,8,9,6,7,3,4,2,0,-1,-2,-3};
int asize=sizeof(a)/sizeof(a[0]);
cout<<"\nArray before sorting\n"<<endl;
show(a,asize);

sort(a,a+asize);

cout<<"\nArray after sorting\n"<<endl;

show(a,asize);
return 0;
}
