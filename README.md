# Dr Quine
Programs that outputs there source code in assembly, c and python.

## Colleen
Outputs it's source code.

## Grace
Writes its source code in a file.

## Sully
Writes its source code in a file named Sully_X.c/Sully_X.s. The X will be an interger given in the source. Once the file is created, the program compiles this file and then runs the new program (which will have the name of its
source file).

## How to compile
From a Colleen/Grace/Sully directory run `make`

## How to run
From a Colleen/Grave/Sully directory run `./Colleen`

# Examples
```
./Colleen
;
;       comment outside
;

section .data
        coleen db ";%1$c;       comment outside%1$c;%1$c%1$csection .data%1$c   coleen db %2$c%3$s%2$c, 0%1$c%1$csection .text%1$c                                                                                global start%1$c global main%1$c extern printf%1$c%1$cstart:%1$c call main%1$c   ret%1$c%1$cfunc:%1$c    ret%1$c%1$cmain:%1$c;%1$c;                                                                                comment inside%1$c;%1$c  push r15%1$c    lea rdi, [rel coleen]%1$c       mov rsi, 10%1$c mov rdx, 34%1$c lea rcx, [rel coleen]%1$c                                                                                 call printf%1$c  call func%1$c   pop r15%1$c     ret%1$c", 0

section .text
        global start
        global main
        extern printf

start:
        call main
        ret

func:
        ret

main:
;
;       comment inside
;
        push r15
        lea rdi, [rel coleen]
        mov rsi, 10
        mov rdx, 34
        lea rcx, [rel coleen]
        call printf
        call func
        pop r15
        ret

$ cat Colleen.s
;
;       comment outside
;

section .data
        coleen db ";%1$c;       comment outside%1$c;%1$c%1$csection .data%1$c   coleen db %2$c%3$s%2$c, 0%1$c%1$csection .text%1$c                                                                                global start%1$c global main%1$c extern printf%1$c%1$cstart:%1$c call main%1$c   ret%1$c%1$cfunc:%1$c    ret%1$c%1$cmain:%1$c;%1$c;                                                                                comment inside%1$c;%1$c  push r15%1$c    lea rdi, [rel coleen]%1$c       mov rsi, 10%1$c mov rdx, 34%1$c lea rcx, [rel coleen]%1$c                                                                                 call printf%1$c  call func%1$c   pop r15%1$c     ret%1$c", 0

section .text
        global start
        global main
        extern printf

start:
        call main
        ret

func:
        ret

main:
;
;       comment inside
;
        push r15
        lea rdi, [rel coleen]
        mov rsi, 10
        mov rdx, 34
        lea rcx, [rel coleen]
        call printf
        call func
        pop r15
        ret
```
