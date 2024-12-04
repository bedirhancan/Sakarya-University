#include <iostream>
using namespace std;

class Kisi
{
	private:
		string isim:
	public:
		Kisi(string isim){
			this->isim=isim;
		}
		Kisi(){
			this->isim=" ";
		}
		friend ostream& operator<<(ostream& ekran,Kisi& sag){
			ekran<<sag.isim<<endl;
			return ekran;
		}
		
};
int main(){
	Kisi *kisi1=new Kisi("bedo");
	Kisi *kisi2=kisi1;
    cout<<*kisi1<<endl;
    delete kisi2;
	Kisi *kisi3=new Kisi("bedo1");
    cout<<*kisi1<<endl;

    delete kisi3;
	return 0;
}