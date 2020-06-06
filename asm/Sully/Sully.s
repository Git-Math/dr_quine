%define i 5

section .bss
	filename resb 111
	exename resb 111
	cmd resb 111

section .data
	currentfile db __FILE__, 0
	filenameprint db "Sully_%1$d.s", 0
	write db "w", 0
	sully db "%%define i %4$d%1$c%1$csection .bss%1$c	filename resb 111%1$c	exename resb 111%1$c	cmd resb 111%1$c%1$csection .data%1$c	currentfile db __FILE__, 0%1$c	filenameprint db %2$cSully_%%1$d.s%2$c, 0%1$c	write db %2$cw%2$c, 0%1$c	sully db %2$c%3$s%2$c, 0%1$c	exenameprint db %2$c./Sully_%%1$d%2$c, 0%1$c	cmdprint db %2$cnasm -f elf64 %%1$s -o tmp.o && clang tmp.o -o %%2$s && rm tmp.o%2$c, 0%1$c%1$csection .text%1$c	global start%1$c	global main%1$c	extern strchr%1$c	extern sprintf%1$c	extern fopen%1$c	extern fprintf%1$c	extern fclose%1$c	extern system%1$c%1$cstart:%1$c	call main%1$c	ret%1$c%1$cmain:%1$c	push r15%1$c%1$c	mov r14, i%1$c	cmp r14, 0%1$c	jl _end%1$c%1$c	lea rdi, [rel currentfile]%1$c	mov rsi, 95%1$c	call strchr%1$c%1$c	cmp rax, 0%1$c	je _fi%1$c	dec r14%1$c	jmp _fi%1$c%1$c_fi:%1$c	lea rdi, [rel filename]%1$c	lea rsi, [rel filenameprint]%1$c	mov rdx, r14%1$c	call sprintf%1$c%1$c	lea rdi, [rel filename]%1$c	lea rsi, [rel write]%1$c	call fopen%1$c%1$c	mov r13, rax%1$c	mov rdi, rax%1$c	lea rsi, [rel sully]%1$c	mov rdx, 10%1$c	mov rcx, 34%1$c	lea r8, [rel sully]%1$c	lea r9, [r14]%1$c	call fprintf%1$c%1$c	mov rdi, r13%1$c	call fclose%1$c%1$c	lea rdi, [rel exename]%1$c	lea rsi, [rel exenameprint]%1$c	mov rdx, r14%1$c	call sprintf%1$c%1$c	lea rdi, [rel cmd]%1$c	lea rsi, [rel cmdprint]%1$c	lea rdx, [rel filename]%1$c	lea rcx, [rel exename]%1$c	call sprintf%1$c%1$c	lea rdi, [rel cmd]%1$c	call system%1$c%1$c	cmp r14, 0%1$c	je _end%1$c	lea rdi, [rel exename]%1$c	call system%1$c	jmp _end%1$c%1$c_end:%1$c	pop r15%1$c	ret%1$c", 0
	exenameprint db "./Sully_%1$d", 0
	cmdprint db "nasm -f elf64 %1$s -o tmp.o && clang tmp.o -o %2$s && rm tmp.o", 0

section .text
	global start
	global main
	extern strchr
	extern sprintf
	extern fopen
	extern fprintf
	extern fclose
	extern system

start:
	call main
	ret

main:
	push r15

	mov r14, i
	cmp r14, 0
	jl _end

	lea rdi, [rel currentfile]
	mov rsi, 95
	call strchr

	cmp rax, 0
	je _fi
	dec r14
	jmp _fi

_fi:
	lea rdi, [rel filename]
	lea rsi, [rel filenameprint]
	mov rdx, r14
	call sprintf

	lea rdi, [rel filename]
	lea rsi, [rel write]
	call fopen

	mov r13, rax
	mov rdi, rax
	lea rsi, [rel sully]
	mov rdx, 10
	mov rcx, 34
	lea r8, [rel sully]
	lea r9, [r14]
	call fprintf

	mov rdi, r13
	call fclose

	lea rdi, [rel exename]
	lea rsi, [rel exenameprint]
	mov rdx, r14
	call sprintf

	lea rdi, [rel cmd]
	lea rsi, [rel cmdprint]
	lea rdx, [rel filename]
	lea rcx, [rel exename]
	call sprintf

	lea rdi, [rel cmd]
	call system

	cmp r14, 0
	je _end
	lea rdi, [rel exename]
	call system
	jmp _end

_end:
	pop r15
	ret
