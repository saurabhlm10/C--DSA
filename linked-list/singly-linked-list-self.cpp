#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }

    void append(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node *last = head;

        while (last->next != nullptr)
        {
            last = last->next;
        }

        last->next = newNode;
    }

    void insertAtHead(int newData)
    {
        Node *newNode = new Node(newData);
        newNode->next = head;
        head = newNode;
    }

    void deleteNode(int key)
    {
        Node *temp = head;
        Node *prev = nullptr;

        // If head node holds the key
        if (temp != nullptr && temp->data == key)
        {
            head = temp->next;
            delete temp;
            return;
        }

        // Search for the key
        while (temp != nullptr && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        // If key not present in the list
        if (temp == nullptr)
            return;

        // Unlink the node
        prev->next = temp->next;
        delete temp;
    }

    void display()
    {
        Node *current = head;

        while (current != nullptr)
        {
            cout << current->data << endl;

            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;
    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);
    list.append(50);
    list.deleteNode(10);
    list.deleteNode(30);
    list.display();
    return 0;
}