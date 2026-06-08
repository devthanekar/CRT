#include<iostream>
#include<iostream>
using namespace std;
//node class
class Node
{
public: //var declaration
    int data;
    Node *next;
    Node(int value)//constructor(memory initialization)
    {
        data=value;//(10)-->(20)
        next=NULL;

    }
};
//insert value in the beginning
void insertAtBeginning(Node*& head,int value)
{
    Node *newnode = new Node(value);
    newnode->next=head;
    head=newnode;
}
void display(Node* head)
{
    if(head == NULL)
    {
        cout<<"Linkedlist is empty"<<endl;
        return;
    }
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" | "<<temp->next<<"->";
        temp=temp->next;
    }
}
//insert at end
void insertAtEnd(Node*&head,int value)
{
    Node* newNode = new Node(value);//10,20,40
    if(head== NULL)
    {
    head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next !=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
int main()
{
    Node *head= NULL;
    //Insert at end
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,40);

    //insert at beginning
    insertAtBeginning(head,5);







display(head);
}
