ASSUME CS:CODE, DS:DATA
DATA SEGMENT
	VAR1 DB 24H
DATA ENDS
CODE SEGMENT
START:
	MOV AX, DATA
	MOV DS,AX
	MOV AX,0000H
	MOV AL,VAR1
	NOT AL
	MOV BL,AL
	ADC AL,00000001B
	MOV BL,AL
	HLT

CODE ENDS
END START