 global	main
	extern	printf
main:
	mov	edi,	format
	xor	eax,	eax
	call	printf
	mov	eax,	0
	rex
format: db	'Hello,	Helberton\n',0

