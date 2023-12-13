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

    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{

    LinkedList list;
    list.append(10);
    // list.append(20);
    // list.append(30);
    // list.append(30);
    // list.append(30);
    list.display();

    return 0;
};