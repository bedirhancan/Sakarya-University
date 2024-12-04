#ifndef LinkedList_hpp
#define LinkedList_hpp 

#include "Node.hpp"
template <typename Object>
class LinkedList{
    private:
        Node<Object> *head;
        int size;
        Node <Object>* FindPrevByPosition(int position){
            if(position<0 || position>size) throw "index out of range";
            int index=1;   
            for(Node<Object>* itr=head;itr!=NULL;itr=itr->next,index++){if(position==index) return itr;}
            return NULL;
        }
    public:
        LinkedList(){
            head=nullptr;
            size=0;
        }
        bool isEmpty()const{
            return size==0;
        }
        int count()const{
            return size;
        }
        const Object& first(){
            if(isEmpty()) throw "List is empty";
            return head->item;
        }
        const Object& last(){
            if(isEmpty()) throw "List is empty";
            return FindPrevByPosition(size)->item;
        }
        void add(const Object& item)
        {
            insert(size,item);
        }
        void insert(int index,const Object& item){
            if(index==0) head=new Node<Object>(item,head);
            else{
                Node<Object> *prev=FindPrevByPosition(index);
                prev->next=new Node<Object>(item,prev->next);
            }
            size++;
        }
        void remove(const Object& item){
            int index=indexOf(item);
            removeAt(index);
        }
        void removeAt(int index){
            if(size==0) throw "list is empty";
            Node<Object> *del;
            if(index==0){
                del=head;
                head=head->next;
            }
            else{
                Node<Object> *prev=FindPrevByPosition(index);
                del=prev->next;
                prev->next=prev->next->next;
            }
            delete del;
            size--;
        }
        int indexOf(const Object& item){
            int index=0;
            for(Node<Object> *itr=head;itr!=nullptr;itr=itr->next,index++)
            {
                if(itr->item==item) return index;
            }
            throw "index out of range";
        }
        bool find(const Object& item){
            for(Node<Object> *itr=head;itr!=nullptr;itr=itr->next)
                if(itr->item==item) return true;
            return false;
            }
        friend ostream& operator<<(ostream& screen,LinkedList<Object>& right){
            if(right.isEmpty()) screen<<"list is empty"<<endl;
            else{
                int index = 0;
            for(Node<Object> *itr=right.head;itr!=nullptr;itr=itr->next,index++)
            {
                screen<<itr->item<<" ";
            }
            }
            return screen;
        }
        void clear(){
            while(!isEmpty())
                removeAt(0);
        }
        ~LinkedList(){
            clear();
        }
    
};
#endif