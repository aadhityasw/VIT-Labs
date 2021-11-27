ASSUME CS:CODE, DS:DATA
DATA SEGMENT
    var DW 1234H
DATA ENDS
CODE SEGMENT
START:
    mov ax,DATA
    mov ds,ax
    mov ax,var
    cmp ah,al
    je case1
    cmp ah,al
    jl case2
    mov cl,01H
    jmp final
    case1:
        mov cl,00H
        jmp final
    case2:
        mov cl,10H
    final:
        hlt
CODE ENDS
END START