	global	main
	extern	printf

	section .text
main:
	mov  edx, msg1
    	mov  esi, 1
    	mov  edi, fmt
    	mov  eax, 0
    	call printf
	mov  ebx, 0
    	mov  eax, 1	

	section .data
msg1:	db	"Hello, Holberton",0
fmt:    db 	"%s",10,0
