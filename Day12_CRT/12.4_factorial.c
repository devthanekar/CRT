#include<iostream>
using namespace std;
void factorial(int n)
{
    if(n == 0||n == 0){
        return 1;
    }

    return n* factorial(n-1);
}
int main()
{
    int n=5;
    factorial(n);
    cout << endl;
}

