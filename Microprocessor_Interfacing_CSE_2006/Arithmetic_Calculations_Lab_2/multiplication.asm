CODE SEGMENT
ASSUME cs:code
START:
    mov cx, 3245H
    mov ax, cx
    mov bx, 4321H
    mul bx
    hlt
CODE ENDS
END START