data segment
    STRING1 DB 08h,14h,05h,0Fh,09h
    res db ?
data ends
 
code segment
assume cs:code, ds:data
start:
    mov ax, data
    mov ds, ax
    mov cx, 04h
    mov bl, 79h
    LEA SI, STRING1
    up:
        mov al, [SI]
        cmp al, bl
        jge nxt
        mov bl, al
    nxt:
        inc si
        dec cx
        jnz up
        mov res,bl
    hlt
code ends
end start
