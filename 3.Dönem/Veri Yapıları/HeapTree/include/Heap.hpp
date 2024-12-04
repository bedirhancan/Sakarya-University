#ifndef Heap_hpp
#define Heap_hpp

#include <iostream>
using namespace std;

class Heap{
    private:
        int *items;
        int length;
        int capacity;

        int leftChildIndex(int);
        int rightChildIndex(int);
        int parentIndex(int);
        void heapfyUp(int);
        void heapfyDown(int);
        void swap(int&,int&);
        int removeMinValue();
        bool isEmpty();
        void add(int);
    public:
        Heap(int*,int);
        int* sort();
        ~Heap();
};






#endif