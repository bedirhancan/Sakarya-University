#ifndef ArrayList_hpp
#define ArrayList_hpp

#include <iostream>
using namespace std;

template <typename Object>
class ArrayList{
    private:
        Object* items;
        int length;
        int capacity;
        void reserve(int newCapacity){
            Object* tmp = new Object[newCapacity];
            for(int i=0;i<length;i++) tmp[i]=items[i];
            delete [] items;
            items=tmp;
            capacity=newCapacity; 
        }
    public:
        ArrayList(){
            capacity=100;
            length=0;
            items=new Object[capacity];
        }
        ArrayList(const ArrayList<Object> &right)
        {
            length=0;
            capacity=max(2,2*right.size())  ;
            items=new Object[capacity];
            for(int i=0;i<right.size();i++){
                add(right.elementAt(i));
            }

        }
        int size() const{
            return length;
        }
        bool isEmpty()const{
            return length==0;
        }
        int indexOf(const Object& item){
            for(int index=0;index<length;index++)
            {
                if(items[index==item]) return index;    
            }
            throw "item not found";
        }
        const Object &elementAt(int index){
            if(index<0 || index>=length) throw "index out of range";
            return items[index];
        }
        void insert(int index,const Object& item){
            if(index<0 || index>length) throw "index out of range";
            if(length==capacity) reserve(2*capacity);
            for(int i=length-1;i>=index;i--) items[i+1]=items[i];
            items[index]=item;
            length++;
        }
        void add(const Object& item){
            insert(length,item);
        }
        const Object& first(){
            if(isEmpty()) throw "list is empty";
            return items[0];
        }
        const Object& last(){
            if(isEmpty()) throw "list is empty";
            return items[length-1];
        }
        void removeAt(int index){
            if(index<0 || index>=length) throw "index out of range";
            for(int i=index+1;i<length;i++) items[i-1]=items[i];
            length--;
        }
        void remove(const Object& item){
            int index=indexOf(item);
            return removeAt(index);
        }
        void clear(){
            length=0;
        }
        bool find(const Object& item){
            for(int i=0;i<length;i++){
                if(items[i]==item) return true;
            }            
            return false;
        }
        friend ostream &operator<<(ostream& screen,ArrayList<Object> &right)
        {
            screen<<endl;
            for(int i=0;i<right.length;i++)
            {
                screen<<right.items[i];
                if(i+1 != right.length) screen<<" | | ";
            }
            return screen;
        }
        ~ArrayList(){
            delete [] items;
        }
};
#endif