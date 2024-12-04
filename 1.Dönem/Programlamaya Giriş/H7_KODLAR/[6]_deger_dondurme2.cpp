//=========================================
// Adı				: Programlamaya Giriş 
// Yazar			: Gülüzar ÇİT
// Versiyon			: 1.0
// Telif Hakkı		: @Copyright 2018
//=========================================
// Değişken Döndürme 
//=========================================

#include <iostream>
#include <locale.h>					// Diller ve karakter setleri kütüphanesi

using namespace std;

void degistir (int, int);
int x=10, y=5;
int main()
{
	// Sonuç ekranında Türkçe karakterleri kullanabilmek için
	setlocale(LC_ALL, "Turkish");

	cout << "x = " << x << " y = " << y << endl;  
	degistir (x,y);
	cout << "x = " << x << " y = " << y << endl;

	system("pause");

	return 0;
}

void degistir (int ilk, int ikinci)
{
	x=ikinci;
	y=ilk;
}


