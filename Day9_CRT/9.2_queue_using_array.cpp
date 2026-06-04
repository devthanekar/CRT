#include<iostream>
using namespace std;

class Queue{
private://decl ration of data member
    int *arr;
    int front;
    int rear;
    int capacity;


public://initialization
   Queue(int size)//constructor
   {
       capacity=size;//size of queue
       arr=new int[capacity];//capacit or size of array or queue
       front=0;//initial state
       rear=-1;//initial state
   }
   bool isEmpty()
   {
       return rear < front;
   }
   bool isFull()
   {
       return rear==capacity-1;
   }
   void Enqueue(int value )
   {
       if(isFull()){
        cout<<"Queue overflow! cannot insert"<<value<<endl;
        return ;
       }
       arr[++rear]=value;
       cout<<value<<"insert into queue"<<endl;
   }
   void Display(){
       if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return ;

       }
       for(int i=front;i<=rear;i++){
        cout<<arr[i]<<" ";
       }
   }
   void dequeue(){
   if(isEmpty())
   {
   cout<<"Queue Underfloaw! Queue is empty"<<endl;
   return ;
   }
   cout<<arr[front]<<" removed from queue"<<endl;
   front++;

    }
    void frontElement(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return ;

    }
    cout<<"Front value="<<arr[front];
    }
    void delet()
{
    if(arr == NULL)
    {
        cout << "Queue already deleted" << endl;
        return;
    }

    delete[] arr;
    arr = NULL;
    front=0;
    rear = -1;
    capacity = 0;

    cout << "Queue is deleted" << endl;
}
    };


int main(){
    int s;
    cout<<"Enter size of Queue"<<endl;
    cin>>s;
    Queue obj(s);
    cout<<"Queue has created"<<endl;
    while(true)
{
    int choice;
    cout<<endl;
    cout<<"1. Enqueu"<<endl;
    cout<<"2. Display"<<endl;
    cout<<"3. Dequeue"<<endl;
    cout<<"4. Peek"<<endl;
    cout<<"5. Delete queue"<<endl;
    cout<<"6. Exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    if(choice == 1)
    {
        int val;
        cout<<"Enter the element for insert"<<endl;
        cin>>val;
       obj.Enqueue(val);
    }else if(choice ==2)
    {
    obj.Display();
    }
    else if(choice ==3)
    {
    obj.dequeue();
    }
     else if(choice ==4)
    {
    obj.frontElement();
    }
    else if(choice ==4)
    {
    obj.delet();
    }
    else{
        break;
    }





    }

}

