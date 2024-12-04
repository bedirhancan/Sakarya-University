#include <iostream>
using namespace std;

void diziTersCevir(int dizi[],int uzunluk)
{
    if(uzunluk>1){
        int tmp=dizi[0];
        dizi[0]=dizi[uzunluk-1];
        dizi[uzunluk-1]=tmp;

        diziTersCevir(dizi+1,uzunluk-2);
    }
}

int main(){
    int sayilar[]={27,31,60,23,46,38};
    diziTersCevir(sayilar,6);
    for(int index=0;index<6;index++)
    {
        cout<<sayilar[index]<<" ";
    }
    return 0;
}