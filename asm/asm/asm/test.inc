section .data
s:
    nop
    nop

table   db 1, 2, 3, 4
msg_catty     db      "Hello, catty!",0xa

section .text

; esi: len; edi: buf
print:
    push    esi             ;message length
    push    edi             ;message to write
    push    dword 1         ;file descriptor (stdout)
    mov     eax,0x4         ;system call number (sys_write)
    call    _syscall        ;call kernel
    add     esp,12          ;clean stack (3 arguments * 4)
    ret

; esi: len; edi: buf
print_no_ret:
    push    esi             ;message length
    push    edi             ;message to write
    push    dword 1         ;file descriptor (stdout)
    mov     eax,0x4         ;system call number (sys_write)
    call    _syscall        ;call kernel
    add     esp,12          ;clean stack (3 arguments * 4)
    ; now go home and exit
    jmp test_entry_ret

test7:
    mov ecx, 4
    mov eax, 1
loop_s:
    add eax, eax
    loop loop_s
    int 3
    ret

test6:
    mov ecx, 1
    jcxz test5
    ret

test5:
    mov esi, 2
    mov edi, msg_catty
    jmp print_no_ret
    ret

test4:
    mov esi, 5
    mov edi, msg_catty
    call print

    mov esi, 4
    mov edi, msg_catty
    call print
    ret

test3:
    mov eax, 2
    inc eax
;int 3
    jmp test3_jmp
    add eax, 1


test3_jmp:
;int 3
    ret

test2:
    mov eax, table
    mov ebx, [eax]
;int 3
    ret

test1:
    mov eax, 1
    mov ebx, 2
    add eax, ebx
    ret

test_entry:
    ;call test1
    ;call test2
    ;call test3
    ;call test4
    ;call test5
    ;call test6
    call test7
;int 3
test_entry_ret:
    ret
