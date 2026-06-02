//Linear search
#include<iostream>
using namespace std;

int linearSearch(int arr[],int size, int target){
for(int i=0;i<size;i++)
    {
    if(arr[i]==target)
        {
        return i;

    }
    }
    return -1;
}

int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int size =sizeof(arr)/sizeof(arr[0]);// use to calculate size of array
cout<<size;
int target =7;
int result =linearSearch(arr, size, target);
if (result !=-1){
        cout<<"Element found at index no="<<result;

}
else{
    cout<<"Element not found";
}

}

