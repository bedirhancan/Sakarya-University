#ifndef SAYI_HPP
#define SAYI_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Basamak.hpp"
using namespace std;

class Sayi{
    private:
		Basamak *head;
		int size;
		int capacity;

        Basamak* FindPrevByPosition(int position);
    public:
		Basamak *basamaklar;
        Sayi();
		bool isEmpty()const;
		int count()const;
		const int& first();
		const int& last();
		void add(const int& item);
		void insert(int index,const int& item);
		const int& elementAt(int index);
		void remove(const int& item);
		void display();
		void removeAt(int index);
		
		int indexOf(const int& item);
		
		bool find(const int& item);
		
		friend ostream& operator<<(ostream& screen, Sayi& right);

		void clear();
		~Sayi();
		  void EkleBasamak(int deger);
    	  void OkuSayi(string sayiStr);
};
#endif