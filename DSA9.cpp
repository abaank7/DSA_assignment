#include<iostream>
using namespace std;
// Doubly LinkedList : insertion,
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val):data(val),next(nullptr),prev(nullptr){}
};

class linkedList
{
    Node* head;
    public:
    

    linkedList():head(nullptr){}


    void insertAtBeginning(int val)
    {
        Node* newNode = new Node(val);

        if(head != nullptr)
        {
            head->prev = newNode;
            newNode->next = head;
        }

        head = newNode;
    }


    void printList()
    {
        Node* temp = head;
        while(temp != nullptr)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};


int main(){

    linkedList list;
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtBeginning(30);
    list.insertAtBeginning(40);
    list.printList();

return 0;
}