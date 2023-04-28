	SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

global    main
	extern printf
	global main
main:
	 mov   edi, format
	 xor   eax, eax
	 call  printf
	 mov 	eax, 0
	 ret
