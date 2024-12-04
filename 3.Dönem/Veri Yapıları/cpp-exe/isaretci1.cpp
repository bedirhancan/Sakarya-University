#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Ogrenci{
    public:
    Ogrenci()
    {
        this->numara=1000*(1+rand()%3)+rand()%999;
        this->sinif=1+rand() %  4;
    }
    int numaraGetir() const
    {
        return numara;
    }
    int sinifGetir() const
    {
        return sinif;
    }
    friend ostream& operator<<(ostream& os,const Ogrenci& ogrenci)
    {
        os<<setw(5)<<ogrenci.numaraGetir()<<"-"<<setw(4)<<right<<ogrenci.sinifGetir();
        return os;
    }
    private:
        int numara;
        int sinif;
}
int main()
{
    
    
    
    
    return 0;
}