global _start

section .data
	
	align 2
	tek_str: db 'Bu sayi tektir', 0xa
	cift_str: db 'Bu sayi cifttir', 0xa
	helloLen: equ $-tek_str

section .bss

section .text

	_start:

	mov edx, 0        ; clear dividend
	mov eax, 65   ; dividend
	mov ecx, 2    ; divisor
	div ecx           ; EAX = 0x80, EDX = 0x3

	mov eax, 0x4
	mov ebx, 0x1
	mov ecx, tek_str
	mov edx, helloLen
	int 0x80

	mov eax, 0x1
	xor ebx, ebx
	int 0x80
