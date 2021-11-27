ASSUME CS:CODE, DS:DATA
DATA SEGMENT
    var dw 1087H
    arr dw 5 dup(0)
DATA ENDS
CODE SEGMENT
START:
    mov ax,DATA
    mov ds,ax
    mov cx,05H
    mov si, OFFSET arr
    mov ax,var
    mov bx,ax
    RPT:
        mov [si],ax
        add si,02H
        shl ax,01H
        loop RPT
    mov si, OFFSET arr
    mov cx,04H
    mov ax,[si]
    RPT2:
        add si,02H
        mov dx,[si]
        cmp ax,dx
        jg CONTINUE
        mov ax,[si]
    CONTINUE:
        loop RPT2
    hlt
CODE ENDS
END START