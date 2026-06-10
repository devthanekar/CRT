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
int a[]={1,5,8,9,6,7,3,4,2,0};
int size=sizeof(a)/sizeof(a[0]);
cout<<"\nThe array is:\n";
show(a,size);
 sort(a,a+size);
 cout<<"\nThe array after sorting is :\n";
 show(a,size);
 if(binary_search(a,a+10,2)){
    cout<<"\nElement found in array";
 }
 else{
    cout<<"\n Element not found in array";
 }
 return 0;
}
