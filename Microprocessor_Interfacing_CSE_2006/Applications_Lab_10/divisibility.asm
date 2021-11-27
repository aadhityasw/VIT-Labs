ASSUME CS:CODE,DS:DATA
DATA SEGMENT
    arr db 31d, 23d, 61d, 23d, 44d, 00d
    count db 00h
DATA ENDS
CODE SEGMENT
START:
    mov ax,DATA
    mov ds,ax
    mov cx,06h
    mov bl,00h
    mov bh,04d
    mov si, OFFSET arr
    L1:
        mov ax,0000h
        mov al,[si]
        add si,01h
        div bh
        cmp ah,00h
        jne L2
        inc bl
        L2:
            loop L1
    mov ax,0000h
    mov ah,02h
    add bl,48d
    mov dl,bl
    int 21h
    hlt
CODE ENDS
END START