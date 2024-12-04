#include <iostream>
using namespace std;

// int* diziolustursifirla(int uzunluk)
// {
//     int *sayi=new int (uzunluk);
//     for(int i=0;i<uzunluk;i++)
//     {
//         dizi[i]=0;
//     }
//     return dizi;
// }

// int* diziKopyala(int *kaynak,int uzunluk)
// {
//     int *hedef=new int (uzunluk);
//     for(int i=0;i<uzunluk;i++)
//     {
//         hedef[i]=kaynak[i];
//     }
//     return hedef;
// }

bool diziKarsilastir(int* d1,int u1,int* d2,int u2)
{
    if(u1 != u2) return false;
    for(int i=0;i<u1;i++)
    {
        if(d1[i] != d2[i]) return false;
    }
    return true;
}
int main(){
    // int sayilar[]={5,10,15};
    // int *r;
    // r=diziKopyala(sayilar,3);
    // r[0]=100;
    // cout<<sayilar[0]<<endl;
    // cout<<r[0]<<endl;
    // cout<<r[1];
    // delete [] r;

    int p[] = {1,2,3};
    int r[] = {4,3,2};
    if(diziKarsilastir(p,3,r,3)) cout<<"diziler esit";
    else cout<<"diziler esit degil";
    return 0;
}