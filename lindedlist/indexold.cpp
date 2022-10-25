
#include <iostream>
using namespace std;
// Linked list contains a sequence of numbers

class IntegerLinkedList
{
    struct Node;
};

void insert(int value);
void display();
struct Node
{
    int value;  // the value of the current node.
    Node *next; // the pointer which refer to the next node if it is exist.
};

Node *head = NULL; // the head refers to the first node if it is exist.

int main()
{
    insert(4);
    insert(7);
    insert(6);
    insert(8);
    insert(0);
    display();
}

void insert(int value)
{
    /**
     * 1- create a new nodw with the arg value
     */

    Node *node, *last;
    node = new Node;
    node->value = value;

    if (head == NULL)
    {
        head = node;
        node->next = NULL;
    }
    else
    {
        last = head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = node;
        node->next = NULL;
    }
}

void display()
{
    Node *current;
    if (head == NULL)
    {
        cout << "List is Empty.";
    }
    else
    {
        current = head;

        while (current != NULL)
        {
            // cout << current->value << "\t";
            current = current->next;
        }
        // cout << current;
    }

    // cout << head->value;
}