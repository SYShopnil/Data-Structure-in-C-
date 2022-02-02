#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insert(Node **root, int item)
{
    Node *ptr = *root, temp = new Node;
    temp->data = item;
    temp->next = NULL;

    if (root == NULL)
        root = temp;
    else
    {
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
}

void evenOdd(Node root)
{
    int odd = 0, even = 0;
    Node *ptr = root;
    while (ptr != NULL)
    {

        if (ptr->data % 2 == 0)
            even += ptr->data;
        else
            odd += ptr->data;

        ptr = ptr->next;
    }

    cout << "Even Sum = " << even << endl;
    cout << "Odd Sum = " << odd << endl;
}

int main()
{
    Node *root = NULL;
    insert(&root, 1);
    insert(&root, 2);
    insert(&root, 3);
    insert(&root, 4);
    insert(&root, 5);
    insert(&root, 6);
    insert(&root, 7);

    evenOdd(root);

    return 0;
}