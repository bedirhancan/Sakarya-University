;30h ile 50h adresleri aras�ndaki verilerin toplam�n� bulan program�:
;a. elde olu�mad��� d���nerek, sonucunu 60h adresine,
;b. elde olu�tu�unu d���nerek, sonucun y�ksek bayt�n� 60h adresine, 
;d���k bayt�n� 61h adresine yazacak �ekilde tasarlay�n�z.

	org 0000h
	sjmp basla
	org 0030h
basla:
	mov 30h,#0A1h
	mov 31h,#0A2h
	mov 37h,#08h
	mov 3ah,#02h
	mov 3fh,#04h
	mov 50h,#0F8h
	
	MOV A, #00H ;TOPLAMI TUTACAGIM a YI SIFIRLA
	MOV R0,#30H ;dizinin ilk indisini atadim
	MOV 60H,#00h ;elde ekleyecegim i�in baslangi�ta sifirladim
tekrar:
	ADD A,@R0  ;toplama yaptim
	JNC atla ;toplama isleminde tasma yoksa atla
	INC 60H ;eldeyi y�ksek byte a ekle	
atla:
	INC R0
	CJNE R0,#51H,tekrar
	MOV 61H, A
	END
		

