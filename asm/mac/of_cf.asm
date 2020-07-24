SECTION .data

msg: db "hello, my cat!", 0x0a
len: equ $-msg
msg_yes: db "yes", 0x0a
len_yes: equ $-msg_yes

int_msg: db "%d\n", 0x0a
int_msg_len: equ $-int_msg

SECTION .text
global _main

system_call:
    syscall
    ret

print_int:
	call _printf
	ret

_main:
	; write
    mov rax,0x2000004
    mov rdi,1
    mov rsi,msg
    mov rdx,len
    call system_call

	mov rbx, 1
	add rbx, 0xFFFFFFFFFFFFFFFF 
	; get OF & CF
	pushf
	mov eax, (esp)
	mov rdi, int_msg
	mov rsi, eax
	call print_int
	;jmp overflow
	jne overflow
	popf 
	jmp exit

overflow:
	popf
	; write
    mov rax,0x2000004
    mov rdi,1
    mov rsi,msg_yes
    mov rdx,len_yes
    call system_call
	
exit:
	; exit
    mov rax,0x2000001
    mov rdi,0
    call system_call
