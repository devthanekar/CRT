#include<iostream>
    using namespace std;
compare(int arr1[],int arr2[],int size1,int size2){
for(int i=0;i<size1;i++){
    for(int j=0;j<size2;j++){
        if(arr1[i]==arr2[j]){
           return arr1[i];}
    }
}
return -1;
}




    int main(){
    int arr1[]={1,2,3,4,};
    int arr2[]={3,4,5,6};
    int size1 =sizeof(arr1)/sizeof(arr1[0]);
    int size2 =sizeof(arr2)/sizeof(arr2[0]);

    int result=compare(arr1,arr2,size1,size2);
    if(result!=-1){
    cout<<"Same value is:"<<result;
}
else{
    cout<<"No repeated value";
}
    //cout<<size1<<size2;
    }
