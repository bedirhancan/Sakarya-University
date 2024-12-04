/*
* @file Dosya adı  :main.cpp
* @description Programınızın açıklaması ne yaptığına dair.
* @course Dersi aldığınız eğitim türü ve grup : 2-A  G221210053
* @assignment Kaçıncı ödev olduğu : ödev1
* @date Kodu oluşturduğunuz Tarih :26.11.2023
* @author Gruptakilerin yazar adları ve mail adresleri : Bedirhan Can bedirhan.can@ogr.sakarya.edu.tr 
*/
#include "Basamak.hpp"
#include "Sayi.hpp"
#include "SayilarListesi.hpp"
#include "Dugum.hpp"

int main()
{
    Sayi sayilar;
    ifstream dosya("./Sayilar.txt");
    if (dosya.is_open()) {
        string satir;
        while (getline(dosya, satir)) {
            cout << satir << endl;
            sayilar.OkuSayi(satir);
        }
        dosya.close();
    } else {
        cerr << "Dosya acma hatasi!" << endl;
        return 1;
    }   
     Basamak* basamak = sayilar.basamaklar;
    while (basamak) {
        cout << basamak->deger << " Adres: ("<<basamak<<")";
        basamak = basamak->sonraki;
        cout << endl;
    }
    cout << endl;

    //int secim;
    // do {
    //     cout << "Menu:\n";
    //     cout << "1. Tek basamaklar, basa al\n";
    //     cout << "2. Basamaklari tersle\n";
    //     cout << "3. En buyuk sayiyi cikar\n";
    //     cout << "4. Cikis\n";
    //     cout << "Seciminizi yapin: ";
    //     cin >> secim;

    //     switch (secim) {
    //         case 1:cout<<sayilar.count();
    //             break;
    //         case 2:
    //             break;
    //         case 3:
    //             break;
    //         case 4:
    //             cout << "Programdan cikiliyor." << endl;
    //             system("pause");
    //             break;
    //         default:
    //             cout << "Gecersiz secenek! Lutfen tekrar deneyin." << endl;
    //             break;
    //     }

    // } while (secim != 4);

    basamak = sayilar.basamaklar;
    while (basamak) {
        Basamak* silinecek = basamak;
        basamak = basamak->sonraki;
        delete silinecek;
    }
    
    return 0;
}