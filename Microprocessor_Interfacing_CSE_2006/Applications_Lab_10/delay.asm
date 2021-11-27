ASSUME CS:CODE
CODE SEGMENT
START:
    mov cx, 0B2AH
    L1:
        dec cx
        nop
        jnz L1
    mov ah,04Ch
    int 21h
    hlt
CODE ENDS
END START