data segment
    bcd dw 25h
    bin dw ?
data ends
code segment
assume cs:code,ds:data
start:
    mov ax,data
    mov ds,ax
    mov ax,bcd
    mov ax,0fh
    mov bx,ax
    mov ax,bcd
    ans ax,0f0h
    mov cl,04h
    ror al,cl
    mov cx,0ah
    mul cx
    add ax,bx
    mov bin,ax
    mov ah,4ch
    hlt
code ends
end start
