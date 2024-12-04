#include "ArrayList.hpp"

int main(){
    ArrayList <int> *numbers=new ArrayList<int>();
    numbers->add(26);
    numbers->add(9);
    numbers->add(2003);
    numbers->insert(1,0);
    cout<<*numbers<<endl;
    numbers->remove(2003);
    numbers->removeAt(1);
    cout<<*numbers<<endl;
    delete numbers;
    return 0;
}