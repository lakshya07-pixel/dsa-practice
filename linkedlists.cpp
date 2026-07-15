#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    int n;

    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    for(int i=0;i<n;i++)
    {
        int value;
        cin >> value;

        Node* newNode = new Node();

        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
