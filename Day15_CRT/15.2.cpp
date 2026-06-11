#include<iostream>
using namespace std;
void remove_element(int arr[],int size,int element)
{int k=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element){
         k=i;
         break;
        }
    }
    if(k!=-1){
        for(int i=k;i<size-1;i++){
            arr[i]=arr[i+1];

        }
        size--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int a[]={1,2,3,4,5};
int size=sizeof(a)/sizeof(a[0]);
int element=3;
remove_element(a,size,element);
}


