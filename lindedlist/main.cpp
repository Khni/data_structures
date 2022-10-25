#include <iostream>
#include "IntegerLinkedList.h"
using namespace std;

int main()
{
    IntegerLinkedList list;
    list.insert(4);
    list.insert(7);
    list.insert(6);
    list.insert(8);
    list.insert(7);
    list.insert(6);
    list.insert(8);
    list.display();
    return 0;
}