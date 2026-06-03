     #include<iostream>
    using namespace std;
    int palindrom(int arr[],int size){
    int st=0,end=size-1;
    while(st<end){
            if(arr[st]==arr[end]){
       ++st;
       -- end;

       }
    else{
        return -1;
    }
    }
    return 1;
    }



    int main(){
    int arr[]={1,2,3,2,1};
    int size =sizeof(arr)/sizeof(arr[0]);
    int result=palindrom(arr,size);
    if(result!=-1){
    cout<<"Given array is palindrom"<<result;
}
  else{
    cout<<"Given array is not palindrom";
}
    }
