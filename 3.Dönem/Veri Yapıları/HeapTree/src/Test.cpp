#include "Heap.hpp"
#include "cstdlib"

int main(){
    int *zeynepler=new int[100];

    cout<<"dizinin siralanmadan onceki hali:"<<endl;
    for(int i=0;i<100;i++){
        int z=rand() & 100 + 1;
        cout<<z<<" ";
        zeynepler[i]=z;
    }
    Heap *zeynep = new Heap(zeynepler,100);

    delete [] zeynepler;
    zeynepler= zeynep->sort();
    cout<<endl<<"dizinin siralanmis hali:"<<endl;
    for(int i=0;i<100;i++){
        cout<<zeynepler[i]<<" ";
    }
    delete [] zeynepler;
    delete zeynep;
    return 0;
}