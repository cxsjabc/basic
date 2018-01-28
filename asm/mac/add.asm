SECTION .data

msg: db "hello, my cat!", 0x0a
len: equ $-msg

SECTION .text
global _main

system_call:
    syscall
    ret

_main:
	mov ah, 0FEH
	add ah, 2
    mov rax,0x2000004
    mov rdi,1
    mov rsi,msg
    mov rdx,len
    call system_call

    mov rax,0x2000001
    mov rdi,0
    call system_call
