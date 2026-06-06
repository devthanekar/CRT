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
        data=value;
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
//insert at end
void insertAtEnd(Node*& head,int value)
{
    Node* newNode = new Node(value);//10,20
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


}
