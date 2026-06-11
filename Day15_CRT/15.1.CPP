#include<iostream>
using namespace std;`
//#include<>
void add_element(int arr[],int j,int k){
    for(int i=j;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=k;
    j++;
    for(int p=0;p<j;p++)
    {
        cout << arr[p]<<" ";
    }
}
int main(){
    int a[]={2,3,4};
    int size=sizeof(a)/sizeof(a[0]);
    int element=1;
    add_element(a,size,element);

}
