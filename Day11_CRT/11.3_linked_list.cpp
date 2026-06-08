#include<iostream> // single linked list
using namespace std;

// separate node class
class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

// insert value at beginning
void insertAtBeginning(Node* &head, int value)
{
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// insert value at end
void insertAtEnd(Node* &head, int value)
{
    Node* newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

void display(Node* head)
{
    if(head == NULL){
        cout << "Linked list is empty" << endl;
        return;
    }

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int node()
{
    Node* head = NULL;

    insertAtBeginning(head, 5);
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 40);

    display(head);   // Display list here 

    return 0;
}

int main()
{
    node();
    return 0;
} 