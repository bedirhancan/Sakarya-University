;30h ile 50h adresleri aras�ndaki verilerin en b�y�g�n� bulan
;ve 60h adresine yazan program 
;ve adresini de 61H adresine yazan program
;en b�y�kten ka� adet varsa 62H adresine yazan prog.

	MOV 30H,#0D1H
	MOV 31H,#0F9H
	MOV 32H,#21H
	MOV 33H,#0F9H
	MOV 34H,#0FFH
	MOV 3AH,#0E7H
	MOV 3CH,#11H
	MOV 44H,#0F9H

	MOV 60H,30H  ;dizinin ilk elemanini en b�y�k kabul ettim
	MOV 61H,#30H ;dizinin ilk elemaninin indisini yazdim
	MOV 62H,#01H ;en b�y�k bir adet var
	MOV R0,#31H ;dizinin indisi
tekrar:
	MOV A,@R0 ;diziden yeni eleman oku
	CJNE A,60H,esitdegil
	;esit b�lgesi
	MOV 61H,R0
	INC 62H
	SJMP yenisayikucuk
esitdegil:
	JC yenisayikucuk
	;yenisayimiz b�y�k o zaman degistir
	MOV 60H,A ;yeni bulunan b�y�k degeri ata
	MOV 61H,R0 ;yeni bulunan elemaninin indisi
	MOV 62H,#01H ;yeni b�y�k bulunca sayaci 1 le
yenisayikucuk:
	INC R0
	CJNE R0,#51H,tekrar

	END
