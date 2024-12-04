//=========================================
// Adı				: Programlamaya Giriş 
// Yazar			: Gülüzar ÇİT
// Versiyon			: 1.0
// Telif Hakkı		: @Copyright 2018
//=========================================
// Değer Döndürme 
//=========================================

#include <iostream>
#include <locale.h>					// Diller ve karakter setleri kütüphanesi

using namespace std;

float cevir(float);

int main()
{
	// Sonuç ekranında Türkçe karakterleri kullanabilmek için
	setlocale(LC_ALL, "Turkish");

	float libre, kilo;  

	cout << "Kilonuzu Giriniz (kg) ";
	cin >> kilo;

	libre = cevir(kilo);
	cout << "Kilonuz (lb) " << libre << endl;

	system("pause");

	return 0;
}

float cevir(float kg)
{
	float lb = kg / 0.453592f;
	return lb;
}




