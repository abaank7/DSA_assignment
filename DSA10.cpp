#include<iostream>
using namespace std;
// Doubly linked list
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(){}
    Node(int val):data(val),next(nullptr),prev(nullptr){}

};


void printForward(Node* head)
{
    Node* traverser = head;
    while(traverser != nullptr)
    {
        cout<<traverser->data<<" ";
        traverser = traverser->next;
    }
    cout<<endl;
}

void printBackward(Node* tail)
{
    Node* traverser = tail;
    while(traverser != nullptr)
    {
        cout<<traverser->data<<" ";
        traverser = traverser->prev;
    }
    cout<<endl;
}


int main(){

Node* head= nullptr;// i didnt initialize them, i have to initialise it to nullptr
Node* tail=nullptr;

// 1st node
Node* newNode = new Node(20);

// newNode->data = 20;
// newNode->next = nullptr;
newNode->prev = tail;

head = newNode;
tail = newNode;

// 2nd node
newNode = new Node(5);

// newNode->data = 5;
// newNode->next = nullptr;
newNode->prev = tail;
tail->next = newNode;
tail = newNode;

newNode = new Node(69);
newNode->prev = tail;
tail->next = newNode;
tail = newNode;


newNode = new Node(19);
newNode->prev = tail;
tail->next = newNode;
tail = newNode;

newNode = new Node(31);
newNode->prev = tail;
tail->next = newNode;
tail = newNode;


printForward(head);
printBackward(tail);
return 0;



}