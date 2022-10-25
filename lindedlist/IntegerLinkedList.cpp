#include "IntegerLinkedList.h"
using namespace std;
#include <iostream>

// constructor
IntegerLinkedList::IntegerLinkedList()
{

    head = NULL;
}

// insert method
void IntegerLinkedList::insert(int value)
{
    IntegerLinkedList::Node *node, *last;
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

        last = node;
        node->next = NULL;
    }
}

// display method
void IntegerLinkedList::display()
{
    if (head == NULL)
    {
        cout << "List is Empty." << endl;
    }
    else
    {
        Node *current;
        current = head;
        while (current != NULL)
        {

            cout << current->value;
            current = current->next;
        }
    }
}