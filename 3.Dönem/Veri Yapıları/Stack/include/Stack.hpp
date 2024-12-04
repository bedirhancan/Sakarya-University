#ifndef Stack_hpp
#define Stack_hpp

#include <iostream>
using namespace std;

template <typename Object>
class Stack{
    private:
        Object *items;
        int topOfStack;
        int capacity;
        void reserve(int newCapacity){
            Object *tmp=new Object[newCapacity];
            for(int index=0;index<capacity;index++)
                tmp[index]=items[index];
            delete [] items;
            items=tmp;
            capacity=newCapacity;
        }
    public:
        Stack(){
            capacity=100;
            topOfStack=-1;
            items=new Object[capacity];
        }
        bool isEmpty(){
            return topOfStack==-1;
        }
        void clear(){
            topOfStack=-1;
        }
        void push(const Object &item){
            if(topOfStack+1==capacity) reserve(2*capacity);
            topOfStack++;
            items[topOfStack]=item;
        }
        const Object& top(){
            if(isEmpty()) throw "Stack is empty";
            return items[topOfStack];
        }
        void pop(){
            if(isEmpty()) throw "Stack is empty";
            topOfStack--;
        }
        ~Stack(){
            delete [] items;
        }
};

#endif