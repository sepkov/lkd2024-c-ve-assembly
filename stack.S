global _start

section .data
	
	align 2
	hello: db 'Hello world!', 0xa
	helloLen: equ $-hello

section .bss

section .text

	_start:

	push 0x5
	push 0x8
	push 0x11
	push 20h
	push 55
	mov ebx, 0
	pop eax
	add ebx,eax
	pop eax
	add ebx,eax
	pop eax
	add ebx,eax
	pop eax
	add ebx,eax
	pop eax
	add ebx,eax

	mov eax, 3
	add eax, 62
	mov [hello+4], eax

	mov eax, 0x4
	mov ebx, 0x1
	mov ecx, hello
	mov edx, helloLen
	int 0x80

	mov eax, 0x1
	xor ebx, ebx
	int 0x80
