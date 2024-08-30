#include<iostream>
using namespace std;
// insertion at Head,Tail and specific position and deletion at Head, Tail and at specific position
class Node
{
    public:
    int data;
    Node* next;

    Node(int val):data(val),next(nullptr){}
};

class linkedList
{
    Node* head;

    public:
    linkedList():head(nullptr){}

    void insertAtBeginning(int val)
    {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val)
    {
        Node* newNode = new Node(val);
        if(head == nullptr)
        {
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = newNode;

    }

    void printList()
    {
        Node* temp = head;
        while(temp != nullptr)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void deleteHead()
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteTail()
    {
        if(!head)
        {
            cout<<"the list is empty , nothing to delete";
            return;
        }

        if(head->next == nullptr)
        {
            delete head;
            head = nullptr;
            return;
        }

         Node* temp = head;
         while(temp->next->next != nullptr)
         {
            temp = temp->next;
         }

         Node* tail = temp->next;
         temp->next = nullptr;
         delete tail;

    }

    void insertAtSpecific(int value,int position)
    {
        Node* newNode = new Node(value);

        // if(head == nullptr)
        // {
        //     newNode->next = head;
        //     head = newNode;
        //     return;
        // }

        if(position == 1)
        {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        for(int i=0; current != nullptr && i < position - 1;i++)
        {
            current = current->next;
        }

        if(current == nullptr)
        {
            cout<<"out of bounds";
            delete newNode;
            return;
        }


        newNode->next = current->next;
        current->next = newNode;


    }

// Delete the node after a specific position (1-based index)
void deleteAfterPosition(int position)
{
    // If the list is empty or there's no node after the given position
    if (head == nullptr || head->next == nullptr)
    {
        cout << "No node exists after the given position." << endl;
        return;
    }

    Node* current = head;

    // Move to the node at the given position
    for (int i = 1; current != nullptr && i < position; i++)
    {
        current = current->next;
    }

    // Check if current or the node after it is null
    if (current == nullptr || current->next == nullptr)
    {
        cout << "No node exists after the given position." << endl;
        return;
    }

    // Delete the node after the current node
    Node* nodeToDelete = current->next;
    current->next = nodeToDelete->next;
    delete nodeToDelete;
}



    

};

int main(){


linkedList list;

list.insertAtBeginning(1);
list.insertAtBeginning(2);
list.insertAtBeginning(3);
list.insertAtBeginning(4);
list.printList();



list.insertAtSpecific(99,2); // its 0 based so 2 will be at 3rd position

list.printList();

list.deleteAfterPosition(3);// 1 based index
list.printList();




return 0;
}