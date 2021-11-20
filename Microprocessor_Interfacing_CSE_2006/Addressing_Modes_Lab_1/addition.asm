ASSUME CS:CODE
CODE SEGMENT
START:
    mov al, 02H
    mov bl, 04H
    add al, bl
    hlt
CODE ENDS
END START