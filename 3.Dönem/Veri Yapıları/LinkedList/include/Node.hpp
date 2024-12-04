#ifndef Node_hpp
#define Node_hpp

#include <iostream>
using namespace std;

template <typename Object>
struct Node{
    Object item;
    Node<Object> *next;

    Node(const Object& item,Node<Object> *next=nullptr)
    {
        this->item=item;
        this->next=next;
    }
};
#endif