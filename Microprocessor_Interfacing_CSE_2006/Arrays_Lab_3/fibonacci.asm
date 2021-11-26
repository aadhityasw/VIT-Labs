CODE SEGMENT
ASSUME cs:code
START:
    mov al,00H;
    mov cx,08h;
    mov si,10H;
    mov [si],al;
    add al,01h;
    add si,01h;
    mov [si],al;
    sub cx,02h;
    FIBO:
        mov al,[si-1];
        add al,[si];
        add si,01h;
        mov [si],al;
    loop FIBO
    hlt
CODE ENDS
END START