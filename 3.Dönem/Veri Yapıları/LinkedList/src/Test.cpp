#include <cstdlib>
#include "LinkedList.hpp"

int main(){
    LinkedList<string> *names= new LinkedList<string>();
    int choice=0;
    string name;
    int position;
    do{
        system("CLS");
        cout<<"[1] Add Name"<<endl;
        cout<<"[2] Remove Name"<<endl;
        cout<<"[3] Remove From Position"<<endl;
        cout<<"[4] Insert Name"<<endl;
        cout<<"[5] Find Position"<<endl;
        cout<<"[6] Number of Names"<<endl;
        cout<<"[7] First Name"<<endl;
        cout<<"[8] Last Name"<<endl;
        cout<<"[9] List Names"<<endl;
        cout<<"[10] Clear Names"<<endl;
        cout<<"[11] Exit"<<endl;
        cout<<"Choice:"<<endl;
        cin>>choice;
        system("CLS");
        switch (choice)
        {
        case 1:
            cout<<"Name:";
            cin.ignore();
            getline(cin,name);
            names->add(name);
            break;
        case 2:
            cout<<"Name:";
            cin.ignore();
            getline(cin,name);
            names->remove(name);
            break;
        case 3:
            cout<<"Position:";
            cin>>position;
            names->removeAt(position);
            break;
        case 4:
            cout<<"Position:";
            cin>>position;
            cout<<"Name:";
            cin.ignore();
            getline(cin,name);
            names->insert(position,name);
            break;
        case 5:
            cout<<"Name:";
            cin.ignore();
            getline(cin,name);
            cout<<"Position:"<<names->indexOf(name);
            cin.get();
            break;
        case 6:
            cout<<"Number of Names:"<<names->count();
            cin.ignore();
            cin.get();
            break;
        case 7:
            cout<<"First Names:"<<names->first();
            cin.ignore();
            cin.get();
            break;
        case 8:
            cout<<"Last Names:"<<names->last();
            cin.ignore();
            cin.get();
            break;
        case 9:
            cout<<"Names:"<<endl;
            cout<<*names<<endl;
            cin.ignore();
            cin.get();
            break;
        case 10:
            names->clear();
            break;
        case 11:
            break;
        default:
            cout<<endl<<"Wrong choice!!"<<endl;
            cin.ignore();
            cin.get();
            break;
        }
        system("CLS");
    }while (choice!=11);
    delete names;
    return 0;
}