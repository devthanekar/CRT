#include<stack>
#include<iostream>
using namespace std;
int main(){
    stack<int>stack;
    stack.push(21);//Thevalue pushed int the stack should be of the same data which is written during declaration of stack
    stack.push(22);
    stack.push(23);
    stack.push(24);
    stack.push(25);
    cout<<stack.top()<<" ";
    int num=0;
    stack.push(num);
    stack.pop();
    stack.pop();

    while(!stack.empty())
    {
        cout<<stack.top()<<" ";
        stack.pop();
    }
    return 0;
}
