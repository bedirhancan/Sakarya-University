;30h ile 50h adresleri aras�ndaki verilerin toplam�n� bulan program�:
;a. elde olu�mad��� d���nerek, sonucunu 60h adresine,
;b. elde olustugu d�s�n�lerek, d�s�k bayt 61h y�ksek olan 60h a yazan

	MOV 30H,#0E1H
	MOV 31H,#0F3H
	MOV 32H,#21H
	MOV 33H,#0E8H
	MOV 34H,#0C4H
	MOV 3AH,#0F7H
	MOV 3CH,#11H
	MOV 44H,#0D9H
	MOV 50H,#0C2H

;a secenegi

;	MOV R0,#30H ;dizinin indisi icin R0 atandi
;	MOV A,#00H ;toplami sifirladim
;topla:					  
;	ADD A,@R0 ;toplama islemi yap
;	INC R0 ;dizinin indisini artir
;	MOV 60H,A
;	CJNE R0,#51H,topla
	;MOV 60H,A

;b secenegi
	MOV R0,#30H
	MOV A,#00H
	MOV 60H,#00H ;y�ksek bayt
	MOV 61H,#00H ;d�s�k bayt
topla:
	ADD A,@R0
	JNC eldeyok
	;elde var b�lgesi
	INC 60H ;eldeyi ekle
eldeyok:
	MOV 61H,A  ;toplami 61H a yaz
	INC R0
	CJNE R0,#51H,topla

	END



