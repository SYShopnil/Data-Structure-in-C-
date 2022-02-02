#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void display(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{
    Node *head, *first, *second;
    head = new Node();
    first = new Node();
    second = new Node();

    head->data = 5;
    head->next = first;

    first->data = 58;
    first->next = second;

    second->data = 85;
    second->next = NULL;

    display(head);
}