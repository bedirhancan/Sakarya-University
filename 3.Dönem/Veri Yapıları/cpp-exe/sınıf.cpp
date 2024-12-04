#include <iostream>
using namespace std;

class Kisi{
    private:
        string isim;
        int yas;
    public:
        Kisi(string isim,int yas)
        {
            this->isim=isim;
            this->yas=yas;
        }
        friend ostream& operator<<(ostream& ekran,Kisi& sag)
        {
            ekran<<sag.isim<<"("<<sag.yas<<")"<<endl;
            return ekran;
        }
};

int main(){

    Kisi **kisiler=new Kisi*[10];
    kisiler[0]=new Kisi("bedirhan",19);
    cout<<*kisiler[0];
    delete kisiler[0];
    delete [] kisiler;
    return 0;
}