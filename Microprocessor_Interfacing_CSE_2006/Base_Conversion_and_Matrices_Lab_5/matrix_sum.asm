assume cs:code, ds:data
data segment
	mat1 dw 0022h, 0011h, 0020h, 0033h, 0016h, 0011h, 0013h
	mat2 dw 0020h, 0013h, 0010h, 0023h, 0015h, 0042h, 0031h
	resmat dw 7 dup(0)
data ends

code segment
start:
	mov cx, 07h
	mov bx, cx
	mov ax, data
	mov ds, ax
	mov ax, 00h
rpt:
	add ax, mat1[si]
	add ax, mat2[si]
	mov resmat[si], ax
	mov ax, 00h
	add si, 02h
	loop rpt
	hlt
	int 21h
code ends
end start
