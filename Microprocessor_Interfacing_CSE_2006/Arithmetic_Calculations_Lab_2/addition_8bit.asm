CODE SEGMENT
ASSUME cs:code
START:
    mov al, 01H
    mov bl, 02H
    add al, bl
    mov si, 10H
    mov [si], al
    mov al, 03H
    mov bl, 04H
    adc al, bl
    inc si
    mov [si], al
    mov al, 00H
    adc al, al
    inc si
    mov [si], al
    hlt
CODE ENDS
END START