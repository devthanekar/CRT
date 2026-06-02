#include<iostream>
using namespace std;

int linearSearch(int arr[],int size, int target){
    int count;
for(int i=0;i<size;i++)
    {
    if(arr[i]==target)
        {
        count++;

    }
    }
    return count;
}
int main(){
int arr[]={3,4,6,7,2,3,2,4,2};
int size =sizeof(arr)/sizeof(arr[0]);// use to calculate size of array
cout<<size;
int target =15;
int result =linearSearch(arr, size, target);
if (result !=-1){
        cout<<"Element found at index no="<<result;

}
else{
    cout<<"Element not found";
}

}
