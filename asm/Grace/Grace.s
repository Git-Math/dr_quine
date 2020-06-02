%define FILENAME "Grace_kid.s"
%define GRACE "%%define FILENAME %2$cGrace_kid.s%2$c%1$c%%define GRACE %2$c%3$s%2$c%1$c%%macro FT 0%1$csection .data%1$c	filename db FILENAME, 0%1$c	write db %2$cw%2$c, 0%1$c	grace db GRACE, 0%1$c%1$csection .text%1$c	global start%1$c	global main%1$c	extern fopen%1$c	extern fprintf%1$c	extern fclose%1$c%1$cstart:%1$c	call main%1$c	ret%1$c%1$cmain:%1$c	push r15%1$c%1$c	lea rdi, [rel filename]%1$c	lea rsi, [rel write]%1$c	call fopen%1$c%1$c	mov r14, rax%1$c	mov rdi, rax%1$c	lea rsi, [rel grace]%1$c	mov rdx, 10%1$c	mov rcx, 34%1$c	lea r8, [rel grace]%1$c	call fprintf%1$c%1$c	mov rdi, r14%1$c	call fclose%1$c%1$c	pop r15%1$c	ret%1$c%%endmacro%1$c%1$c;%1$c;	go%1$c;%1$cFT%1$c"
%macro FT 0
section .data
	filename db FILENAME, 0
	write db "w", 0
	grace db GRACE, 0

section .text
	global start
	global main
	extern fopen
	extern fprintf
	extern fclose

start:
	call main
	ret

main:
	push r15

	lea rdi, [rel filename]
	lea rsi, [rel write]
	call fopen

	mov r14, rax
	mov rdi, rax
	lea rsi, [rel grace]
	mov rdx, 10
	mov rcx, 34
	lea r8, [rel grace]
	call fprintf

	mov rdi, r14
	call fclose

	pop r15
	ret
%endmacro

;
;	go
;
FT
