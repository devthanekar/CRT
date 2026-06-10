#include<algorithm>
#include<iostream>
using namespace std;
int main(){

int arr[]={3,5,1,2,4};
    //Sort the array in acending order
    //std::sort(std::begin(arr),std::end(arr));
sort(begin(arr), end(arr));
//Print the sortde array
for(int i:arr){
        cout<<i<<" ";
}
return 0;
}
