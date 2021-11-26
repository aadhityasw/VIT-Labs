assume cs:code, ds:data
data segment
    r1 db 1ah,2bh,3ch,4dh,5eh,6fh
data ends
code segment
start:
    mov di,599
    mov ax,data
    mov ds,ax
    mov es,ax
    mov ax,0000
    lea si,var1
    mov cl,[si]
    mov ch,00h
    inc si
    cld
    rep movsb
    hlt
code ends
end start