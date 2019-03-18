
section .data
s:
    nop
    nop

table   db 1, 2, 3, 4
msg_catty     db      "Hello, catty!",0xa
msg_dog       db      "dog", 0
msg_dog1      db      'd', 'o', 'g', 0
msg_dog1_len  db      ($ - msg_dog1)

arr db 1, 2, 3
    db 4, 5, 6

a   equ  10

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

test_zf:
    mov eax, 1
    sub eax, 1
    int 3       ; eflag bit6 is 1
    ret

test_mod:
    mov eax, 100 % 3
;int 3
    ret

; ecx: n; return value: eax
global cal_2_n
cal_2_n:
    mov eax, 1
    cmp ecx, 0
    jz cal_2_n_out
mul_internal:
    add eax, eax
    loop mul_internal
cal_2_n_out:
    ret

test_div:
    mov ax, 1000
    mov bl, 20
    div bl
    int 3
    ret

test_lower_to_upper:
    mov eax, msg_catty
    mov ecx, 5
    call lower_to_upper
    mov esi, 5
    mov edi, msg_catty
    call print
    ret

test_add:
    mov eax, 10
    mov ebx, 1
    call _add
    int 3
    ret

test_cube:
    mov bx, 3
    call cube
    int 3
    ret

test9:
    mov al, 10
    mov bl, 10
    mul bl
    
    mov ax, 100
    mov bx, 100
    mul bx

    mov ax, 100
    mov bx, 100
    mul bx
    mul bx
    int 3
    ret

test8:
    mov ecx, 4
    call cal_2_n
    ;int 3
    ret

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
    retf

test_entry:
    ;call test1
    ;call test2
    ;call test3
    ;call test4
    ;call test5
    ;call test6
    ;call test7
    ;call test8
    ;call test9
    ;call test_cube
    ;call test_add
    ;call test_lower_to_upper
    ;call test_div
    ;call test_mod
    call test_zf
;int 3
test_entry_ret:
    ret
