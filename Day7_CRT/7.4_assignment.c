#include<iostream>
    using namespace std;
    int palindrom(int arr[],int size){
    int st=0,end=size-1;
    int count;
    for(int i=0;i<size;i++){
            if(arr[st]==arr[end]{
       ++st;
       ++end;
       count ++;
       }
    else{
        return -1;
    }
    return count;
    }
    }



    int main(){
    int arr[]={1,2,3,2,1};
    int size =sizeof(arr)/sizeof(arr[0]);
    int result=palindrom(arr,size);
    if(result!=-1){
    cout<<"Given array is palindrom";
}
  else{
    cout<<"No repeated value";
}
