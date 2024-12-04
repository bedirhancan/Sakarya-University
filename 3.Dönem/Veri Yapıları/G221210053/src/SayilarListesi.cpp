/*
* @file Dosya adı  :SayilarListesi.cpp
* @description Programınızın açıklaması ne yaptığına dair.
* @course Dersi aldığınız eğitim türü ve grup : 2-A  G221210053
* @assignment Kaçıncı ödev olduğu : ödev1
* @date Kodu oluşturduğunuz Tarih :26.11.2023
* @author Gruptakilerin yazar adları ve mail adresleri : Bedirhan Can bedirhan.can@ogr.sakarya.edu.tr 
*/

// #include "SayilarListesi.hpp"

// 	Dugum* SayilarListesi::FindPrevByPosition(int position){
// 			if(position < 0 || position > size) throw "Index out of range";
// 			int index =1;
// 			for(Dugum* itr=head;itr!=nullptr;itr=itr->sonraki,index++){
// 				if(position == index) return itr;	
// 			}
// 			return nullptr;
// 	};
//     SayilarListesi::SayilarListesi(){
// 		head = nullptr;
// 		size =0;
// 		sayilar=nullptr;
// 	}
// 	bool SayilarListesi::isEmpty()const{
// 		return size == 0;
// 	}
// 	int SayilarListesi::count()const{
// 		return size;
// 	}
// 	const int& SayilarListesi::first(){
// 		if(isEmpty()) throw "Empty List";
// 		return sayi->sonraki;
// 	}
// 	const int& SayilarListesi::last(){
// 		if(isEmpty()) throw "Empty List";
// 		return FindPrevByPosition(size)->deger;	
// 	}
// 	void SayilarListesi::add(const int& deger){
// 		insert(size,deger);
// 	}
// 	void SayilarListesi::insert(int index,const int& deger){
// 		if(index==0) head = new Dugum(deger,head);
// 		else{
// 			Dugum* prev = FindPrevByPosition(index);
// 			prev->sonraki = new Dugum(deger,prev->sonraki);
// 		}
// 		size++;			
// 	}
// 	const int& SayilarListesi::elementAt(int index){
//     if (index == 0) 
//     {
//         return head->sayi;
//     }
//     return FindPrevByPosition(index)->sonraki->sayi;
// }
// 	void Sayi::remove(const int& deger){
// 		removeAt(indexOf(deger));
// 	}	
// 	void Sayi::removeAt(int index){
// 		if(isEmpty()) throw "Empty List";
// 		Basamak* del;
// 		if(index==0){
// 				del = head;
// 				head= head->sonraki;
// 		}
// 		else{
// 			Basamak* prev = FindPrevByPosition(index);
// 			del = prev->sonraki;
// 			prev->sonraki = prev->sonraki->sonraki;
// 		}
// 		delete del;
// 		size--;
// 	}	
// 	int Sayi::indexOf(const int& deger){
// 		int index=0;
// 		for(Basamak* itr=head;itr!=nullptr;itr=itr->sonraki,index++){
// 			if(itr->deger==deger) return index;				
// 		}
// 		throw "Index out of range";
// 	}
// 	void Sayi::display() {
//         Basamak* current = head;
//         while (current != nullptr) {
//             cout << current->deger << " -> ";
//             current = current->sonraki;
//         }
//        cout << "nullptr" << endl;
// }
// 	bool Sayi::find(const int& deger){		
// 		for(Basamak* itr=head;itr!=nullptr;itr=itr->sonraki){
// 			if(itr->deger==deger) return true;				
// 		}
// 		return false;			
// 	}
// 	void Sayi::clear(){
// 		while(!isEmpty()){
// 			removeAt(0);
// 		}
// 	}
// 	Sayi::~Sayi(){
// 		clear();
// 	}			
	
// 	ostream& operator<<(ostream& screen, Sayi& right){
// 	if(right.isEmpty()) screen << "List is empty"<<endl;
// 	else{
// 			for(Basamak *itr=right.head;itr!=NULL; itr=itr->sonraki){
// 				screen<<itr->deger<< " ";
// 			} 
// 			return screen;
// 		}

// 	for (Basamak *donguEleman = right.head; donguEleman != NULL; donguEleman = donguEleman->sonraki)
//     {
//         screen<<donguEleman<< endl;
//         screen<<"-----------"<< endl;
//         screen<<"|"<<"     "<<donguEleman->deger<<"     "<<"|"<<endl;
//         screen<<"-----------"<< endl;
//         screen<<"|"<<donguEleman->sonraki<<"   "<<"|"<< endl;
//         screen<<"-----------"<< endl<< endl;
//     }
//     screen << endl;
//     return screen;
// }
	