#include <iostream>
using namespace std;

class IntegerLinkedList
{
    int x;
    struct Node
    {
        int value;
        Node *next;
    };
    Node *head;

public:
    IntegerLinkedList();
    void insert(int);
    void display();
    void remove(Node *);
};