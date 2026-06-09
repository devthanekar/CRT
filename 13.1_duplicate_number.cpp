#include<iostream>
using namespace std;
void duplicates(int arr[],int n)
{
    cout<<"Duplicates\n";
    cout<<"[";
    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    cout<<arr[j]<<" ";

                    cout<<",";
                    break;


                }

            }
    }
    cout<<"]";
}
int main(){
int arr[]={4,3,2,7,8,2,1,5,5};
int size=sizeof(arr)/sizeof(arr[0]);
duplicates(arr,size);
return 0;
}


