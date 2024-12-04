#include <iostream>
using namespace std;

bool ikiliArama(int sayilar[],int baslangic,int bitis,int aranan){
    int ortaIndis=(baslangic+bitis)/2;
    if(bitis<baslangic) return false;
    if(sayilar[ortaIndis]==aranan) return true;
    if(aranan<sayilar[ortaIndis])
        return ikiliArama(sayilar,baslangic,ortaIndis-1,aranan);
    else
        return ikiliArama(sayilar,ortaIndis+1,bitis,aranan);
}
int main()
{
    int dizi[]={23,27,31,38,46,60};
    int sayi;
    cout<<"Aranan sayi:";
    cin>>sayi;
    if(ikiliArama(dizi,0,5,sayi)) cout<<"aranan sayi var";
    else cout<<"aranan sayi yok";
    return 0;
}