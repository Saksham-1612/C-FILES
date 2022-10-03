#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void insertAtMiddle(Node *head, int data, int position)
{
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}
void PrintList(Node *head)
{
    Node *temp = head;
    for (; temp != NULL; temp = temp->next)
        cout << temp->data << "-->";
    cout << "null" << endl;
}
int main()
{
    Node *n1 = new Node(10);
    Node *head = n1;
    Node *tail = n1;
    insertAtTail(tail, 20);
    insertAtTail(tail, 10);
    insertAtMiddle(head, 25, 2);
    PrintList(head);
    return 0;
}