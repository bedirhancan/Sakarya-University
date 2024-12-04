;20h-39h aral���nda (ilk ve son dahil) yerle�tirilmi� olan bir dizide, 
;verileri tek tek kontrol edip;
;a.	�ift ise, verinin yar�s�n� 40h adresinden itibaren yeni diziye yerle�tiren, 
;�art� sa�layanlar�n say�s�n� da 60h adresine yazan,
;b.	Tek olanlar�n en b�y���n� 61h adresine, bulunan en b�y���n 
;(ilk veya son bulunan en b�y�k tercihi size aittir) adresini de 
;62h adresine yazan program� 8051 komut seti ile yaz�n�z.

	org 0000h
	sjmp basla
	org 0030h
basla:

	MOV 20H,#00H
	MOV 21H,#02H
	MOV 22H,#05H
	MOV 23H,#06H
	MOV 24H,#25H
	MOV 25H,#06H
	MOV 26H,#06H
	MOV 27H,#05H
	MOV 28H,#06H
	MOV 31H,#06H
	MOV 32H,#08H
	MOV 33H,#08H
	MOV 34H,#05H
	MOV 35H,#18H
	MOV 36H,#08H
	MOV 37H,#18H
	MOV 38H,#06H
	MOV 39H,#25H

 	mov r0, #20h ;kaynak dizinin baslangici
	mov 61h,#01h ;en b�y�k kabulu
	mov r1, #40h ;�ift dizisi indisi
	mov 60h, #00h ;saya� sifirla

 yenielemanoku:
	MOV A,@R0 ;dizinin elemanini oku
	JB ACC.0,sayitek
	//sayi �ift b�lgesi
	MOV B,#02H
	DIV AB
	MOV @R1,A  ;yeni diziye y�kle
	INC R1	  ;yeni dizi indisi artir
	INC 60H  ;sarti saglayanlarin sayaci 1 artir
	LJMP dongukontrol
sayitek:
	CJNE A,61H,esitdegil
	MOV 62H,R0
	LJMP dongukontrol
esitdegil:
	JC dongukontrol
	;yeni sayi b�y�k
	MOV 61H,A
	MOV 62H,R0
dongukontrol:
	INC R0
	CJNE R0,#3AH,yenielemanoku

	END
