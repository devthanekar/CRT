    #include<iostream>
    using namespace std;
    void printArray(int arr[],int n){
        for (int i=0;i<n;i++){
            cout<<arr[i];
        }
    }



    int main(){
    int arr[]={5,1,4,2,8};
    int n =sizeof(arr)/sizeof(arr[0]);// use to calculate size of array
   cout<<"Original Array: ";
  printArray(arr,n);

    }
    //complexity of this code is O(Log N)

