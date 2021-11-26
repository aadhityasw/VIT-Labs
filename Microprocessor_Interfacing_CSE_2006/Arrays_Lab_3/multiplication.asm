DATA SEGMENT
    MAT1 dw 0022H, 0011H, 0032H, 2142H, 0015H
    MAT2 dw 0032H, 0031H, 0022H, 2342H, 0215H
    RESMAT dw 5 dup(0)
DATA ENDS

CODE SEGMENT
ASSUME CS:CODE,DS:DATA
START:
    mov cx, 05H
    mov bx, cx
    mov ax, DATA
    mov ds, ax
    mov ax, 0000H
    mov si, 00H
    RPT:
        add ax, MAT1[si]
        mul MAT2[si]
        mov RESMAT[si], ax
        mov ax, 00H
        add si, 02H
    LOOP RPT
    hlt
CODE ENDS
END START