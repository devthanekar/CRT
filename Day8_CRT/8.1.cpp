#include<iostream>
using namespace std;

class stack
{
 private:
     int size, top;
     int *arr;


 public:


     stack(int s)//constructor call automaticaly
     {
         size=s;
         arr= new int[size];
         top=-1;
     }
     bool isEmpty()// It check the stack is empty or not
     {
         return top == -1;
     }
     bool isFull()//It check the stack is full or not
    {
        return top == size-1;
    }
    void push(int value)//Push operation
    {
      if(isFull()){
        cout<<"Stack is full"<<endl;
        return ;

      }
      arr[++top]=value;
      cout<<"arr[top] Element has pushed"<<endl;
    }
    void display()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return ;
        }
        for(int i=top; i>=0;i--)
        {
            cout<<"["<<arr[i]<<"]"<<endl;
        }
    }
    //pop operation
    void pop()
    {
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return ;
        }
        cout<<arr[top--]<<endl;



    }
    void peek(){
    if(isEmpty())
    {
       cout<<"Stack is empty"<<endl;
       return ;
    }
       cout<<"Top element:"<<arr[top]<<endl;
    }
void delet()
{
    if(arr == NULL)
    {
        cout << "Stack already deleted" << endl;
        return;
    }

    delete[] arr;
    arr = NULL;
    top = -1;
    size = 0;

    cout << "Stack is deleted" << endl;
}


};


int main(){
stack st(5);//stack size =5
cout<<"Stack has created"<<endl;
while(true){
    int choice;
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Peek"<<endl;
    cout<<"5. Delete"<<endl;
    cout<<"6. Exit"<<endl;

    cout<<"Enter your choice"<<endl;
    cin>>choice;
    if(choice == 1)
    {
        int val;
        cout<<"Enter the element for push"<<endl;
        cin>>val;
        st.push(val);
    }else if(choice ==2)
    {
    st.pop();
    }

    else if(choice == 3)
    {

        st.display();

    }
    else if(choice ==4)
        {
        st.peek();
        }
        else if(choice==5)
            {
            st.delet();
        }
        else{
            break ;
        }



}
}

