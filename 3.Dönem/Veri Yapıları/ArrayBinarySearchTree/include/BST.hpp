#ifndef BST_hpp
#define BST_hpp

#include <iostream>
#include <cmath>
using namespace std;
#define SIZE 1000

template <typename Object>
class BST{
    private:
        Object *items;
        int condition[SIZE];
         
        int IndexOf(const Object& item,int currentIndex=0){
            while(true){
                if(currentIndex >= SIZE || condition[currentIndex]==0) return -1;
                else if(item<items[currentIndex]) currentIndex = 2* currentIndex + 1;
                else if(item>items[currentIndex]) currentIndex = 2* currentIndex + 2;
                else if(items[currentIndex]==item && condition[currentIndex==1]) return currentIndex;
            }
        }
    public:
        BST(){
            items=new Object[SIZE];
            clear();
        }
        void clear(){
            for(int i=0;i<SIZE;i++){
                condition[i]=0; 
            }
        }
        void add(const Object& item){
            int currentIndex=0;
            while(true){
                if(condition[currentIndex]==0){
                    items[currentIndex]=item;
                    condition[currentIndex]=1;
                    break;
                }
                else if(item<items[currentIndex]) currentIndex = 2* currentIndex + 1;
                else if(item>items[currentIndex]) currentIndex = 2* currentIndex + 2;
                else break;
            }
        }
        bool search(const Object& item){
            return IndexOf(item) != -1;
        }
        void inOrder(int currentIndex=0){
            if(currentIndex < SIZE && condition[currentIndex]!=0 ){
                inOrder(2*currentIndex+1);
                cout<<items[currentIndex]<<" ";
                inOrder(2*currentIndex+2);
            }
        }
        void preOrder(int currentIndex=0){
            if(currentIndex < SIZE && condition[currentIndex]!=0 ){
                cout<<items[currentIndex]<<" ";
                preOrder(2*currentIndex+1);
                preOrder(2*currentIndex+2);
            }
        }
        void postOrder(int currentIndex=0){
            if(currentIndex < SIZE && condition[currentIndex]!=0 ){
                postOrder(2*currentIndex+1);
                postOrder(2*currentIndex+2);
                cout<<items[currentIndex]<<" "; 
            }
        }
        void levelOrder(){
            for(int i=0;i<SIZE;i++){
                if(condition[i]==1)
                cout<<items[i]<<" "; 
            }
        }
        int height(int index=0){
            if(condition[index]==0) return -1;
            return 1    + max(height(2*index+1),height(2*index+2));
        }
        ~BST(){
            delete [] items;
        }
};

#endif