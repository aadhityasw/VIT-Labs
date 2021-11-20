CODE SEGMENT
ASSUME cs:code
START:
    mov ax, 3245H
    mov bx, ax
    mov cx, 4321H
    add ax, cx
    hlt
CODE ENDS
END START