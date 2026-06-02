    #include<iostream>
    using namespace std;
    int binarySearch(int arr[],int size ,int target){
    int low=0;
    int high= size-1;
     while(low<=high){
        int mid=(low+high)/2;// gives an mid value of array
        cout<<mid;
        if (arr[mid]==target)//check the mid value = target
            {
            return mid;
        }
        else if (arr[mid]<target)//if mid value is less than taget it will search right side
        {
            low=mid+1;
        }
            else//else it will search left side
            {
                high=mid-1;
            }
     }
      return -1;
    }
    int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size =sizeof(arr)/sizeof(arr[0]);// use to calculate size of array
    int target=50;
    int result=binarySearch(arr, size ,target);
    if (result !=-1){
            cout<<"Element found at index no="<<result;

    }
    else{
        cout<<"Element not found";
    }
    }
    //complexity of this code is O(Log N)
