#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// struct Node
// {
//     int data;
//     Node *next;
// };

// void printData(Node *ptr)
// {
//     int length = 0;
//     while (ptr != NULL)
//     {
//         cout << ptr->data;
//         length++;
//         ptr = ptr->next;
//     };
//     cout << endl
//          << length << endl;
// }

main()
{
    // Node *head, *first, *second, *last;
    // int a;
    // head = new Node();
    // first = new Node();
    // second = new Node();
    // last = new Node();

    // head->data = 1;
    // head->next = first;
    // a = head->data;
    // first->data = 2;
    // first->next = second;

    // second->data = 3;
    // second->next = last;

    // last->data = 4;
    // last->next = NULL;

    // // printData(head);
    // cout << a;

    int array[] = {1, 2, 3, 4, 5}, *point;
    point = array;
    ++*point;
    cout << *point;
    *point += 1;
    cout << *point;
    return 0;
}
