section .data
s:
    nop
    nop

section .text

test_offset:
    mov eax, 1
    mov ebx, 2
    add eax, ebx
;int 3
    ret
