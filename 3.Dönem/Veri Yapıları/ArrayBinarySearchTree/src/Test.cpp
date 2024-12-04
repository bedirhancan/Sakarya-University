#include "BST.hpp"

int main(){
    BST<int> *agac = new BST<int>();
    agac->add(45);
    agac->add(2);
    agac->add(18);
    agac->add(9);
    agac->add(50);
    agac->add(40);
    agac->add(23);
    cout<<"preOrder: ";
    agac->preOrder();
    cout<<endl;
    cout<<"postOrder: ";
    agac->postOrder();
    cout<<endl;
    cout<<"inOrder: ";
    agac->inOrder();
    cout<<endl;
    cout<<"levelOrder: ";
    agac->levelOrder();
    cout<<endl;
    cout<<"Yukseklik: "<<agac->height()<<endl;
    delete agac;
    return 0;
}