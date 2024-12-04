#include "Heap.hpp"
Heap::Heap(int* numbers,int length){
    items=new int[length];
    this->capacity=length;
    this->length=0;
    for(int i=0;i<length;i++){
        add(numbers[i]);
    }
}
void Heap::add(int value){
    if(length==capacity) throw "Capacity error!";
    items[length]=value;
    length++;
    heapfyUp(length-1);
}
void Heap::heapfyUp(int index){
    int pIndex;
    if(index!=0){
        pIndex=parentIndex(index);
        if(items[pIndex]>items[index]){
            swap(items[pIndex],items[index]);
            heapfyUp(pIndex);
        }
    }
}
int Heap::parentIndex(int index){
    return (index-1)/2;
}
void Heap::swap(int& a,int& b){
    int tmp=a;
    a=b;
    b=tmp;
}

int Heap::leftChildIndex(int index){
    return 2*index+1;
}
int Heap::rightChildIndex(int index){
    return 2*index+2;
}
void Heap::heapfyDown(int index){
    int lChildIndex=leftChildIndex(index);
    int rChildIndex=rightChildIndex(index);
    int minChildIndex;
    if(rChildIndex>=length){
        if(lChildIndex>=length) return;
        else minChildIndex=lChildIndex;
    }
    else{
        if(items[lChildIndex]>items[rChildIndex]) minChildIndex=rChildIndex;
        else minChildIndex=lChildIndex;
    }
    if(items[index]>items[minChildIndex]){
        swap(items[index],items[minChildIndex]);
        heapfyDown(minChildIndex);
    }
}

int Heap::removeMinValue(){
    if(isEmpty()) throw "Tree is empty!";
    int minValue=items[0];
    items[0]=items[length-1];
    length--;
    if(length>0) heapfyDown(0);
    return minValue;
}
bool Heap::isEmpty(){
    return length==0;
}
int* Heap::sort(){
    int *ordered=new int[capacity];
    for(int i=0;i<capacity;i++){
        ordered[i]=removeMinValue();
    }
    return ordered;
}
Heap::~Heap(){
    delete [] items;
}