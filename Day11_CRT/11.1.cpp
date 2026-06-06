#include<iostream>
using namespace std;
void insertionSort(int arr[],int size)
{
    for(int i=1;i<size;i++)//i=1
    {
        int key = arr[i];//key=3
        int j=i-1;//j=0
        while(j>=0 && key < arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }

}


int main()
{
    int arr[]={5,3,8,6,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    for(int k=0;k<size;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}
