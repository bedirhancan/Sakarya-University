#include "Stack.hpp"

string TabanDonustur(int sayi,int donusturulecekTaban){
    Stack<int> *yigit = new Stack<int>();
    string rakamlar = "0123456789ABCDEF";
    string yeniSayi="";
    while(sayi>0){
        int kalan= sayi % donusturulecekTaban;
        yigit->push(kalan);
        sayi=sayi / donusturulecekTaban;
    }
    while(!yigit->isEmpty()){
        yeniSayi = yeniSayi + rakamlar[yigit->top()];
        yigit->pop(); 
    }
    delete yigit;
    return yeniSayi;
}
int main(){
    int sayi,taban;
    cout<<"10 Tabaninda Sayi:";
    cin>>sayi;
    cout<<"Donusturulecek Taban:";
    cin>>taban;
    cout<<"Yeni Sayi:"<<TabanDonustur(sayi,taban)<<endl;
    system("pause");
    return 0;
}